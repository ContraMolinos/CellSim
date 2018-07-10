#ifndef WORLDSCENE_H
#define WORLDSCENE_H

#include <QGraphicsScene>
#include <QGraphicsSceneMouseEvent>

class WorldScene : public QGraphicsScene
{
    Q_OBJECT
public:
    explicit WorldScene(QObject *parent = nullptr);

signals:
    void mouseClicked(QPointF _point);
public slots:
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
private:
};

#endif // WORLDSCENE_H
