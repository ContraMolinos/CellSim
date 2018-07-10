#include "worldscene.h"
#include<QDebug>

WorldScene::WorldScene(QObject *parent) : QGraphicsScene(parent)
{}

void WorldScene::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    emit mouseClicked(event->scenePos());
    //qDebug()<<event->scenePos();
}

