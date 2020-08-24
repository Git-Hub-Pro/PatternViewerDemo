#include "findkeyword.h"
#include "ui_findkeyword.h"

FindKeyWord::FindKeyWord(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FindKeyWord)
{
    ui->setupUi(this);
}

FindKeyWord::~FindKeyWord()
{
    delete ui;
}
