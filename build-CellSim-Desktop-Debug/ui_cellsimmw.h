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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cellSimMW
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QGraphicsView *worldView;
    QVBoxLayout *verticalLayout;
    QPushButton *StartStop;
    QPushButton *resetButton;
    QPushButton *clearButton;
    QPushButton *advanceButton;
    QSpacerItem *verticalSpacer;
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

        gridLayout->addWidget(worldView, 0, 2, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, -1, -1, -1);
        StartStop = new QPushButton(centralWidget);
        StartStop->setObjectName(QStringLiteral("StartStop"));

        verticalLayout->addWidget(StartStop);

        resetButton = new QPushButton(centralWidget);
        resetButton->setObjectName(QStringLiteral("resetButton"));

        verticalLayout->addWidget(resetButton);

        clearButton = new QPushButton(centralWidget);
        clearButton->setObjectName(QStringLiteral("clearButton"));

        verticalLayout->addWidget(clearButton);

        advanceButton = new QPushButton(centralWidget);
        advanceButton->setObjectName(QStringLiteral("advanceButton"));

        verticalLayout->addWidget(advanceButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout, 0, 3, 1, 1);

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
        StartStop->setText(QApplication::translate("cellSimMW", "Start", 0));
        resetButton->setText(QApplication::translate("cellSimMW", "Reset", 0));
        clearButton->setText(QApplication::translate("cellSimMW", "Clear", 0));
        advanceButton->setText(QApplication::translate("cellSimMW", "Advance", 0));
    } // retranslateUi

};

namespace Ui {
    class cellSimMW: public Ui_cellSimMW {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CELLSIMMW_H
