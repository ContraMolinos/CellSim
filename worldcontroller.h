#ifndef WORLDCONTROLLER_H
#define WORLDCONTROLLER_H

#include <QObject>
#include <QVector>
#include <QRectF>
#include <QTimer>
#include <QGraphicsItem>
#include <QGraphicsRectItem>
#include <QTime>
#include "worldscene.h"
#include "voxel.h"
#include <QDebug>

/*!
 * \brief The WorldController class. It is intended to be an intermediary between the GUI and the backend algorithms.
 */
class WorldController : public QObject
{
    Q_OBJECT
public:
    explicit WorldController(QObject *parent = nullptr);
    virtual ~WorldController();
    WorldScene* scene();
    void makeItems(qreal _prob);
    void startStop();
    void reset(qreal _prob);

public slots:
    /*!
     * \brief test. Just for testing purposes.
     */
    void advance();
    void itemSwitchedByMouseClick(QPointF _pos);

signals:
    void worldReachedFinalState();

private:
    bool itemMustSwitch(uint i, uint j);

    std::vector<std::vector<Voxel> > itemList;

    QTimer *timer;
    WorldScene *wScene;
    QRectF worldDimensions;
    qreal initialProb;
    const uint worldWidth=500;
    const uint worldHeight=300;
    const uint voxelWidth=5;
    const uint voxelHeight=5;
};

#endif // WORLDCONTROLLER_H
