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
#include "conwayconfig.h"
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
    void openConfig();

public slots:
    /*!
     * \brief test. Just for testing purposes.
     */
    void advance();
    void itemSwitchedByMouseClick(QPointF _pos);
    void changeBirthConf(uint _idx, bool _value);
    void changeSurvivalConf(uint _idx, bool _value);

signals:
    void worldReachedFinalState();

private:
    bool itemMustSwitch(uint i, uint j);

    std::vector<std::vector<Voxel> > itemList;

    QTimer *timer;
    WorldScene *wScene;
    QRectF worldDimensions;
    qreal initialProb;
    bool birth[9];
    bool survive[9];
    ConwayConfig *conwayConf;
    const uint worldWidth=500;
    const uint worldHeight=300;
    const uint voxelWidth=5;
    const uint voxelHeight=5;
};

#endif // WORLDCONTROLLER_H
