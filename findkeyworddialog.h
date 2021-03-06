#ifndef FINDKEYWORDDIALOG_H
#define FINDKEYWORDDIALOG_H

#include <QDialog>
#include "widget.h"

namespace Ui {
class FindKeywordDialog;
}

class FindKeywordDialog : public QDialog
{
    Q_OBJECT

public:
    explicit FindKeywordDialog(QWidget *parent = 0);
    ~FindKeywordDialog();

signals:
    void sendKeyword(QString keyword);
    void sendValue(int stringCount);

private slots:
    void on_okButton_clicked();

    void on_cancelButton_clicked();


    void on_nextButton_clicked();

private:
    Ui::FindKeywordDialog *ui;

public:
      // Widget widgetAddress1;

private :
      int stringCount = 0;

};

#endif // FINDKEYWORDDIALOG_H
