#include "findkeyworddialog.h"
#include "ui_findkeyworddialog.h"
#include <QDebug>

FindKeywordDialog::FindKeywordDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FindKeywordDialog)
{
    ui->setupUi(this);
}

FindKeywordDialog::~FindKeywordDialog()
{
    delete ui;
}

void FindKeywordDialog::on_okButton_clicked()
{
    QString keyWord = ui->textEdit->toPlainText();
    qDebug() <<keyWord;
}

void FindKeywordDialog::on_cancelButton_clicked()
{
    FindKeywordDialog::close ();
}
