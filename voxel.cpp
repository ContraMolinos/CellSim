#include "voxel.h"

Voxel::Voxel(qreal _x, qreal _y, qreal _w, qreal _h):shape(new QGraphicsRectItem(0,0,_w,_h)),isOn(false)
{
    shape->setPos(_x,_y);
}

Voxel::Voxel(const Voxel& _other):isOn(_other.isOn)
{
    shape=new QGraphicsRectItem(_other.shape->rect());
    shape->setPos(_other.shape->pos());
}

Voxel::~Voxel()
{
    delete shape;
    shape=nullptr;
}

bool Voxel::status()
{
    return isOn;
}

void Voxel::switchFill()
{
    if(shape->brush().style()==Qt::NoBrush)
        shape->setBrush(QBrush(Qt::black));
    else
        shape->setBrush(Qt::NoBrush);
    isOn=!isOn;
}

QGraphicsRectItem *Voxel::getShape() const
{
    return shape;
}
