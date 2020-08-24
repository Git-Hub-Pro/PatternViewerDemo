#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QString>
#include <QDebug>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void on_openButton_clicked();

    void on_clearButton_clicked();

    void on_findButton_clicked();

    void findKeyword(QString keyword);
    void receiveValue(int stringCount);

private:
    Ui::Widget *ui;

public:
    void printFileHeader(QByteArray *patFile);
    void printCommonHeader(QByteArray *patFile);
    void setValue(int value){count = value;}

private:
        bool isFirstTime;
        int count;


};

#endif // WIDGET_H
