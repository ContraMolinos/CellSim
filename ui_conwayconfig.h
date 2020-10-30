/********************************************************************************
** Form generated from reading UI file 'conwayconfig.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONWAYCONFIG_H
#define UI_CONWAYCONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConwayConfig
{
public:
    QGroupBox *surviveBox;
    QHBoxLayout *horizontalLayout;
    QRadioButton *s0Button;
    QRadioButton *s1Button;
    QRadioButton *s2Button;
    QRadioButton *s3Button;
    QRadioButton *s4Button;
    QRadioButton *s5Button;
    QRadioButton *s6Button;
    QRadioButton *s7Button;
    QRadioButton *s8Button;
    QGroupBox *birthBox;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *b0Button;
    QRadioButton *b1Button;
    QRadioButton *b2Button;
    QRadioButton *b3Button;
    QRadioButton *b4Button;
    QRadioButton *b5Button;
    QRadioButton *b6Button;
    QRadioButton *b7Button;
    QRadioButton *b8Button;

    void setupUi(QWidget *ConwayConfig)
    {
        if (ConwayConfig->objectName().isEmpty())
            ConwayConfig->setObjectName(QString::fromUtf8("ConwayConfig"));
        ConwayConfig->resize(400, 300);
        surviveBox = new QGroupBox(ConwayConfig);
        surviveBox->setObjectName(QString::fromUtf8("surviveBox"));
        surviveBox->setGeometry(QRect(20, 80, 351, 69));
        horizontalLayout = new QHBoxLayout(surviveBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, 12, -1);
        s0Button = new QRadioButton(surviveBox);
        s0Button->setObjectName(QString::fromUtf8("s0Button"));
        s0Button->setAutoExclusive(false);

        horizontalLayout->addWidget(s0Button);

        s1Button = new QRadioButton(surviveBox);
        s1Button->setObjectName(QString::fromUtf8("s1Button"));
        s1Button->setAutoExclusive(false);

        horizontalLayout->addWidget(s1Button);

        s2Button = new QRadioButton(surviveBox);
        s2Button->setObjectName(QString::fromUtf8("s2Button"));
        s2Button->setAutoExclusive(false);

        horizontalLayout->addWidget(s2Button);

        s3Button = new QRadioButton(surviveBox);
        s3Button->setObjectName(QString::fromUtf8("s3Button"));
        s3Button->setAutoExclusive(false);

        horizontalLayout->addWidget(s3Button);

        s4Button = new QRadioButton(surviveBox);
        s4Button->setObjectName(QString::fromUtf8("s4Button"));
        s4Button->setAutoExclusive(false);

        horizontalLayout->addWidget(s4Button);

        s5Button = new QRadioButton(surviveBox);
        s5Button->setObjectName(QString::fromUtf8("s5Button"));
        s5Button->setAutoExclusive(false);

        horizontalLayout->addWidget(s5Button);

        s6Button = new QRadioButton(surviveBox);
        s6Button->setObjectName(QString::fromUtf8("s6Button"));
        s6Button->setAutoExclusive(false);

        horizontalLayout->addWidget(s6Button);

        s7Button = new QRadioButton(surviveBox);
        s7Button->setObjectName(QString::fromUtf8("s7Button"));
        s7Button->setAutoExclusive(false);

        horizontalLayout->addWidget(s7Button);

        s8Button = new QRadioButton(surviveBox);
        s8Button->setObjectName(QString::fromUtf8("s8Button"));
        s8Button->setAutoExclusive(false);

        horizontalLayout->addWidget(s8Button);

        birthBox = new QGroupBox(ConwayConfig);
        birthBox->setObjectName(QString::fromUtf8("birthBox"));
        birthBox->setGeometry(QRect(20, 0, 351, 69));
        horizontalLayout_2 = new QHBoxLayout(birthBox);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, -1, 12, -1);
        b0Button = new QRadioButton(birthBox);
        b0Button->setObjectName(QString::fromUtf8("b0Button"));
        b0Button->setAutoExclusive(false);

        horizontalLayout_2->addWidget(b0Button);

        b1Button = new QRadioButton(birthBox);
        b1Button->setObjectName(QString::fromUtf8("b1Button"));
        b1Button->setAutoExclusive(false);

        horizontalLayout_2->addWidget(b1Button);

        b2Button = new QRadioButton(birthBox);
        b2Button->setObjectName(QString::fromUtf8("b2Button"));
        b2Button->setAutoExclusive(false);

        horizontalLayout_2->addWidget(b2Button);

        b3Button = new QRadioButton(birthBox);
        b3Button->setObjectName(QString::fromUtf8("b3Button"));
        b3Button->setAutoExclusive(false);

        horizontalLayout_2->addWidget(b3Button);

        b4Button = new QRadioButton(birthBox);
        b4Button->setObjectName(QString::fromUtf8("b4Button"));
        b4Button->setAutoExclusive(false);

        horizontalLayout_2->addWidget(b4Button);

        b5Button = new QRadioButton(birthBox);
        b5Button->setObjectName(QString::fromUtf8("b5Button"));
        b5Button->setAutoExclusive(false);

        horizontalLayout_2->addWidget(b5Button);

        b6Button = new QRadioButton(birthBox);
        b6Button->setObjectName(QString::fromUtf8("b6Button"));
        b6Button->setAutoExclusive(false);

        horizontalLayout_2->addWidget(b6Button);

        b7Button = new QRadioButton(birthBox);
        b7Button->setObjectName(QString::fromUtf8("b7Button"));
        b7Button->setAutoExclusive(false);

        horizontalLayout_2->addWidget(b7Button);

        b8Button = new QRadioButton(birthBox);
        b8Button->setObjectName(QString::fromUtf8("b8Button"));
        b8Button->setAutoExclusive(false);

        horizontalLayout_2->addWidget(b8Button);

        surviveBox->raise();
        birthBox->raise();
        b0Button->raise();

        retranslateUi(ConwayConfig);

        QMetaObject::connectSlotsByName(ConwayConfig);
    } // setupUi

    void retranslateUi(QWidget *ConwayConfig)
    {
        ConwayConfig->setWindowTitle(QCoreApplication::translate("ConwayConfig", "Form", nullptr));
        surviveBox->setTitle(QCoreApplication::translate("ConwayConfig", "Survive", nullptr));
        s0Button->setText(QCoreApplication::translate("ConwayConfig", "&0", nullptr));
        s1Button->setText(QCoreApplication::translate("ConwayConfig", "&1", nullptr));
        s2Button->setText(QCoreApplication::translate("ConwayConfig", "&2", nullptr));
        s3Button->setText(QCoreApplication::translate("ConwayConfig", "&3", nullptr));
        s4Button->setText(QCoreApplication::translate("ConwayConfig", "&4", nullptr));
        s5Button->setText(QCoreApplication::translate("ConwayConfig", "&5", nullptr));
        s6Button->setText(QCoreApplication::translate("ConwayConfig", "&6", nullptr));
        s7Button->setText(QCoreApplication::translate("ConwayConfig", "&7", nullptr));
        s8Button->setText(QCoreApplication::translate("ConwayConfig", "&8", nullptr));
        birthBox->setTitle(QCoreApplication::translate("ConwayConfig", "Birth", nullptr));
        b0Button->setText(QCoreApplication::translate("ConwayConfig", "&0", nullptr));
        b1Button->setText(QCoreApplication::translate("ConwayConfig", "&1", nullptr));
        b2Button->setText(QCoreApplication::translate("ConwayConfig", "&2", nullptr));
        b3Button->setText(QCoreApplication::translate("ConwayConfig", "&3", nullptr));
        b4Button->setText(QCoreApplication::translate("ConwayConfig", "&4", nullptr));
        b5Button->setText(QCoreApplication::translate("ConwayConfig", "&5", nullptr));
        b6Button->setText(QCoreApplication::translate("ConwayConfig", "&6", nullptr));
        b7Button->setText(QCoreApplication::translate("ConwayConfig", "&7", nullptr));
        b8Button->setText(QCoreApplication::translate("ConwayConfig", "&8", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConwayConfig: public Ui_ConwayConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONWAYCONFIG_H
