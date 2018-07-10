#ifndef VOXEL_H
#define VOXEL_H

#include <QGraphicsRectItem>
#include <QBrush>

#include <QDebug>
class Voxel
{
public:
    Voxel(qreal _x, qreal _y, qreal _w, qreal _h);
    Voxel(const Voxel& _other);
    ~Voxel();
    bool status();

    void switchFill();

    QGraphicsRectItem *getShape() const;

private:
    QGraphicsRectItem* shape;
    bool isOn;
};

#endif // VOXEL_H
