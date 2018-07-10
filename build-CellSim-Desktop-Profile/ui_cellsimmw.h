/********************************************************************************
** Form generated from reading UI file 'cellsimmw.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CELLSIMMW_H
#define UI_CELLSIMMW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cellSimMW
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QGraphicsView *worldView;
    QSpacerItem *horizontalSpacer;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *cellSimMW)
    {
        if (cellSimMW->objectName().isEmpty())
            cellSimMW->setObjectName(QStringLiteral("cellSimMW"));
        cellSimMW->resize(732, 428);
        centralWidget = new QWidget(cellSimMW);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        worldView = new QGraphicsView(centralWidget);
        worldView->setObjectName(QStringLiteral("worldView"));
        worldView->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        worldView->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        worldView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        worldView->setTransformationAnchor(QGraphicsView::NoAnchor);
        worldView->setResizeAnchor(QGraphicsView::NoAnchor);

        gridLayout->addWidget(worldView, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        cellSimMW->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(cellSimMW);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 732, 23));
        cellSimMW->setMenuBar(menuBar);
        mainToolBar = new QToolBar(cellSimMW);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        cellSimMW->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(cellSimMW);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        cellSimMW->setStatusBar(statusBar);

        retranslateUi(cellSimMW);

        QMetaObject::connectSlotsByName(cellSimMW);
    } // setupUi

    void retranslateUi(QMainWindow *cellSimMW)
    {
        cellSimMW->setWindowTitle(QApplication::translate("cellSimMW", "CellSimMW", 0));
    } // retranslateUi

};

namespace Ui {
    class cellSimMW: public Ui_cellSimMW {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CELLSIMMW_H
