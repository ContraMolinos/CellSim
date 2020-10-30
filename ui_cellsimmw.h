/********************************************************************************
** Form generated from reading UI file 'cellsimmw.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CELLSIMMW_H
#define UI_CELLSIMMW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
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
    QPushButton *configButton;
    QSpacerItem *verticalSpacer;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *cellSimMW)
    {
        if (cellSimMW->objectName().isEmpty())
            cellSimMW->setObjectName(QString::fromUtf8("cellSimMW"));
        cellSimMW->resize(732, 428);
        centralWidget = new QWidget(cellSimMW);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        worldView = new QGraphicsView(centralWidget);
        worldView->setObjectName(QString::fromUtf8("worldView"));
        worldView->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        worldView->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        worldView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        worldView->setTransformationAnchor(QGraphicsView::NoAnchor);
        worldView->setResizeAnchor(QGraphicsView::NoAnchor);

        gridLayout->addWidget(worldView, 0, 2, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, -1, -1, -1);
        StartStop = new QPushButton(centralWidget);
        StartStop->setObjectName(QString::fromUtf8("StartStop"));

        verticalLayout->addWidget(StartStop);

        resetButton = new QPushButton(centralWidget);
        resetButton->setObjectName(QString::fromUtf8("resetButton"));

        verticalLayout->addWidget(resetButton);

        clearButton = new QPushButton(centralWidget);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));

        verticalLayout->addWidget(clearButton);

        advanceButton = new QPushButton(centralWidget);
        advanceButton->setObjectName(QString::fromUtf8("advanceButton"));

        verticalLayout->addWidget(advanceButton);

        configButton = new QPushButton(centralWidget);
        configButton->setObjectName(QString::fromUtf8("configButton"));

        verticalLayout->addWidget(configButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout, 0, 3, 1, 1);

        cellSimMW->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(cellSimMW);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 732, 23));
        cellSimMW->setMenuBar(menuBar);
        mainToolBar = new QToolBar(cellSimMW);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        cellSimMW->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(cellSimMW);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        cellSimMW->setStatusBar(statusBar);

        retranslateUi(cellSimMW);

        QMetaObject::connectSlotsByName(cellSimMW);
    } // setupUi

    void retranslateUi(QMainWindow *cellSimMW)
    {
        cellSimMW->setWindowTitle(QCoreApplication::translate("cellSimMW", "CellSimMW", nullptr));
        StartStop->setText(QCoreApplication::translate("cellSimMW", "Start", nullptr));
        resetButton->setText(QCoreApplication::translate("cellSimMW", "Reset", nullptr));
        clearButton->setText(QCoreApplication::translate("cellSimMW", "Clear", nullptr));
        advanceButton->setText(QCoreApplication::translate("cellSimMW", "Advance", nullptr));
        configButton->setText(QCoreApplication::translate("cellSimMW", "Configuration", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cellSimMW: public Ui_cellSimMW {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CELLSIMMW_H
