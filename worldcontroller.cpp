#include "worldcontroller.h"

WorldController::WorldController(QObject *parent) : QObject(parent), initialProb(0.05)
{
    worldDimensions.setRect(0.0,0.0,worldWidth,worldHeight);
    timer=new QTimer(this);
    wScene=new WorldScene(this);
    wScene->setSceneRect(worldDimensions);
    QObject::connect(timer,&QTimer::timeout,this, &WorldController::advance);
    QObject::connect(wScene,&WorldScene::mouseClicked,this,&WorldController::itemSwitchedByMouseClick);
}

WorldController::~WorldController()
{
}

WorldScene *WorldController::scene()
{
    return wScene;
}

void WorldController::advance()
{
    bool isFinal=true;
    QVector<QPair<uint,uint> > toSwitch;
    for(uint i=0;i<itemList.size();++i)
    {
        for(uint j=0;j<itemList[i].size();++j)
        {
            if(itemMustSwitch(i,j))
                toSwitch.push_back(QPair<uint,uint>(i,j));
        }
    }
    for(QPair<uint,uint> p:toSwitch)
        itemList[p.first][p.second].switchFill();
    isFinal=isFinal && toSwitch.size()==0;

    if(isFinal && timer->isActive())
    {
        timer->stop();
        emit worldReachedFinalState();
    }
}

void WorldController::itemSwitchedByMouseClick(QPointF _pos)
{
    uint i=_pos.x()/voxelWidth;
    uint j=_pos.y()/voxelHeight;
    itemList[i][j].switchFill();
}

void WorldController::reset(qreal _prob)
{
    itemList.clear();
    wScene->clear();
    makeItems(_prob);
}

void WorldController::startStop()
{
    if(timer->isActive())
        timer->stop();
    else
        timer->start(50);
}

bool WorldController::itemMustSwitch(uint i, uint j)
{
    uint lowerI=i==0?itemList.size()-1:i-1;
    uint upperI=i>itemList.size()-2?0:i+1;
    uint lowerJ=j==0?itemList[i].size()-1:j-1;
    uint upperJ=j>itemList[i].size()-2?0:j+1;
    uint n=itemList[lowerI][j].status()+itemList[i][lowerJ].status()+itemList[upperI][j].status()+itemList[i][upperJ].status()+itemList[upperI][upperJ].status()+itemList[upperI][lowerJ].status()+itemList[lowerI][upperJ].status()+itemList[lowerI][lowerJ].status();
    if(itemList[i][j].status())
    {
        if(n<2 || n>3)
            return true;
    }
    else if(!itemList[i][j].status())
    {
        if(n>2&&n<4)
            return true;
    }
    return false;
}

void WorldController::makeItems(qreal _prob)
{
    if(_prob<0 || _prob>1)
        throw std::invalid_argument("Invalid probability.");
    initialProb=_prob;
    qsrand(QTime::currentTime().msec());
    for(uint i=0;i<worldWidth;i+=voxelWidth)
    {
        std::vector<Voxel> column;
        for(uint j=0;j<worldHeight;j+=voxelHeight)
        {
            column.push_back(Voxel(i,j,voxelWidth,voxelHeight));
        }
        itemList.push_back(column);
    }
    for(uint i=0;i<itemList.size();++i)
    {
        for(uint j=0;j<itemList[i].size();++j)
        {
            wScene->addItem(itemList[i][j].getShape());
            if((double)qrand()/(double)RAND_MAX<initialProb)
                itemList[i][j].switchFill();
        }
    }
}

