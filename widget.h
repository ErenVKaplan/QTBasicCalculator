#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
private slots:
    void buttonClicked();//Tıklama olayında işleyen slot fonksiyonu
    void operatorClicked();
    void equalsClicked();
    void resetClicked();
    void deleteHistory();
private:
    int firstNumber;
    QString currentOperator;
    Ui::Widget *ui;
};
#endif // WIDGET_H
