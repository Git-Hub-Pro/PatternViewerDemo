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

private:
    Ui::Widget *ui;

public:
    void printFileHeader(QByteArray *patFile);
    void printCommonHeader(QByteArray *patFile);


private:
        bool isFirstTime;


};

#endif // WIDGET_H
