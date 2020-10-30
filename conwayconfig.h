#ifndef CONWAYCONFIG_H
#define CONWAYCONFIG_H

#include <QWidget>

namespace Ui {
class ConwayConfig;
}

class ConwayConfig : public QWidget
{
    Q_OBJECT

public:
    explicit ConwayConfig(QWidget *parent = 0);
    ~ConwayConfig();
    void setRadioButtons(bool *birth, bool *survive);
signals:
    void birthConfChanged(uint _bButton, bool _value);
    void survivalConfChanged(uint _bButton, bool _value);
private slots:
    void on_b0Button_clicked(bool checked);
    void on_b1Button_clicked(bool checked);
    void on_b2Button_clicked(bool checked);
    void on_b3Button_clicked(bool checked);
    void on_b4Button_clicked(bool checked);
    void on_b5Button_clicked(bool checked);
    void on_b6Button_clicked(bool checked);
    void on_b7Button_clicked(bool checked);
    void on_b8Button_clicked(bool checked);
    void on_s0Button_clicked(bool checked);
    void on_s1Button_clicked(bool checked);
    void on_s2Button_clicked(bool checked);
    void on_s3Button_clicked(bool checked);
    void on_s4Button_clicked(bool checked);
    void on_s5Button_clicked(bool checked);
    void on_s6Button_clicked(bool checked);
    void on_s7Button_clicked(bool checked);
    void on_s8Button_clicked(bool checked);

private:
    Ui::ConwayConfig *ui;
};

#endif // CONWAYCONFIG_H
