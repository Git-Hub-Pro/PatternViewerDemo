#ifndef FINDKEYWORDDIALOG_H
#define FINDKEYWORDDIALOG_H

#include <QDialog>

extern QString keyWord; //extern value be careful use.

namespace Ui {
class FindKeywordDialog;
}

class FindKeywordDialog : public QDialog
{
    Q_OBJECT

public:
    explicit FindKeywordDialog(QWidget *parent = 0);
    ~FindKeywordDialog();

private slots:
    void on_okButton_clicked();

    void on_cancelButton_clicked();

private:
    Ui::FindKeywordDialog *ui;


};

#endif // FINDKEYWORDDIALOG_H
