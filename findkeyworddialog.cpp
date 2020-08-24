#include "findkeyworddialog.h"
#include "ui_findkeyworddialog.h"
#include "widget.h"
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
    QString keyword = ui->textEdit->toPlainText();
    stringCount = 0;

    connect(this,SIGNAL(sendKeyword(QString)),parent(),SLOT(findKeyword(QString)));

    emit sendKeyword(keyword);
}

void FindKeywordDialog::on_cancelButton_clicked()
{
    FindKeywordDialog::close ();
}


void FindKeywordDialog::on_nextButton_clicked()
{
    stringCount += 1;

    connect(this,SIGNAL(sendValue(int)),parent(),SLOT(receiveValue(int)));

    emit sendValue(stringCount);

}
