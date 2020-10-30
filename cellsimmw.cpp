#include "cellsimmw.h"
#include "ui_cellsimmw.h"

cellSimMW::cellSimMW(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::cellSimMW)
{
    ui->setupUi(this);
    //worldScene=new WorldScene(this);
    controller=new WorldController(this);//Making this parent allows automatic destruction.
    WorldScene* worldScene=controller->scene();

    ui->worldView->setScene(worldScene);

    this->show(); //In order for fitInView to work, the MainWindow must be shown, so the final size of QGraphsView is known.

    //When executing this->show(), the resizeEvent was called, but at the time, worldView didn't have the definitive size, so resizeEvent need to be called again.
    ui->worldView->fitInView(worldScene->sceneRect());
    controller->makeItems(0.1);
    QObject::connect(controller,&WorldController::worldReachedFinalState,this, &cellSimMW::switchStartStopText);
}

cellSimMW::~cellSimMW()
{
    delete ui;
}


void cellSimMW::resizeEvent(QResizeEvent *event)
{
    ui->worldView->fitInView(controller->scene()->sceneRect());
    QMainWindow::resizeEvent(event);
}

void cellSimMW::on_StartStop_clicked()
{
    controller->startStop();
    switchStartStopText();
}

void cellSimMW::switchStartStopText()
{
    if(ui->StartStop->text().compare("&Start")==0)
        ui->StartStop->setText("Stop");
    else
        ui->StartStop->setText("Start");
}


void cellSimMW::on_resetButton_clicked()
{
    controller->reset(0.1);
}

void cellSimMW::on_clearButton_clicked()
{
    controller->reset(0);
}

void cellSimMW::on_advanceButton_clicked()
{
    controller->advance();
}

void cellSimMW::on_configButton_clicked()
{
    controller->openConfig();
}

