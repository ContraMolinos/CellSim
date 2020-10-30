#ifndef CELLSIMMW_H
#define CELLSIMMW_H

#include <QMainWindow>
#include "worldscene.h"
#include "worldcontroller.h"

#include <QDebug>

namespace Ui {
/*! \brief GUI Main Window.
 *
 */
class cellSimMW;
}

class cellSimMW : public QMainWindow
{
    Q_OBJECT

public:
    explicit cellSimMW(QWidget *parent = 0);
    ~cellSimMW();

private slots:
    void on_StartStop_clicked();
    void switchStartStopText();
    void on_resetButton_clicked();
    void on_clearButton_clicked();
    void on_advanceButton_clicked();
    void on_configButton_clicked();

protected:
    /*!
     * \brief Override of resizeEvent that will rescale the scene before calling the parent resizeEvent.
     * \param event
     */
    virtual void resizeEvent(QResizeEvent *event);
private:
    Ui::cellSimMW *ui;
    WorldController *controller;

};

#endif // CELLSIMMW_H
