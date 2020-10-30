#include "conwayconfig.h"
#include "ui_conwayconfig.h"
#include <QDebug>

ConwayConfig::ConwayConfig(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ConwayConfig)
{
    ui->setupUi(this);
}

ConwayConfig::~ConwayConfig()
{
    delete ui;
}

void ConwayConfig::setRadioButtons(bool *birth, bool *survive)
{
    QList<QRadioButton *> buttonList=ui->birthBox->findChildren<QRadioButton*>();
    for(uint i=0;i<buttonList.size();++i)
        buttonList.at(i)->setChecked(birth[i]);
    QList<QRadioButton *> buttonList2=ui->surviveBox->findChildren<QRadioButton*>();
    for(uint i=0;i<buttonList.size();++i)
        buttonList2.at(i)->setChecked(survive[i]);
}

void ConwayConfig::on_b0Button_clicked(bool checked)
{
    emit birthConfChanged(0,checked);
}

void ConwayConfig::on_b1Button_clicked(bool checked)
{
    emit birthConfChanged(1,checked);
}

void ConwayConfig::on_b2Button_clicked(bool checked)
{
    emit birthConfChanged(2,checked);
}

void ConwayConfig::on_b3Button_clicked(bool checked)
{
    emit birthConfChanged(3,checked);
}

void ConwayConfig::on_b4Button_clicked(bool checked)
{
    emit birthConfChanged(4,checked);
}

void ConwayConfig::on_b5Button_clicked(bool checked)
{
    emit birthConfChanged(5,checked);
}

void ConwayConfig::on_b6Button_clicked(bool checked)
{
    emit birthConfChanged(6,checked);
}

void ConwayConfig::on_b7Button_clicked(bool checked)
{
    emit birthConfChanged(7,checked);
}

void ConwayConfig::on_b8Button_clicked(bool checked)
{
    emit birthConfChanged(8,checked);
}

void ConwayConfig::on_s0Button_clicked(bool checked)
{
    emit survivalConfChanged(0,checked);
}

void ConwayConfig::on_s1Button_clicked(bool checked)
{
    emit survivalConfChanged(1,checked);
}

void ConwayConfig::on_s2Button_clicked(bool checked)
{
    emit survivalConfChanged(2,checked);
}

void ConwayConfig::on_s3Button_clicked(bool checked)
{
    emit survivalConfChanged(3,checked);
}

void ConwayConfig::on_s4Button_clicked(bool checked)
{
    emit survivalConfChanged(4,checked);
}

void ConwayConfig::on_s5Button_clicked(bool checked)
{
    emit survivalConfChanged(5,checked);
}

void ConwayConfig::on_s6Button_clicked(bool checked)
{
    emit survivalConfChanged(6,checked);
}

void ConwayConfig::on_s7Button_clicked(bool checked)
{
    emit survivalConfChanged(7,checked);
}

void ConwayConfig::on_s8Button_clicked(bool checked)
{
    emit survivalConfChanged(8,checked);
}
