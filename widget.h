#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QString>

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

private:
    Ui::Widget *ui;

public:
    void printFileHeader(QByteArray *patFile);
    void printCommonHeader(QByteArray *patFile);

};

#endif // WIDGET_H
