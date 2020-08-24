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

    connect(this,SIGNAL(sendKeyword(QString)),parent(),SLOT(findKeyword(QString)));

    emit sendKeyword(keyword);
}

void FindKeywordDialog::on_cancelButton_clicked()
{
    FindKeywordDialog::close ();
}

