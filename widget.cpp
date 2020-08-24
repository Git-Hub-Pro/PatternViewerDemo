#include "widget.h"
#include "ui_widget.h"
#include "file.h"
#include "findkeyworddialog.h"
#include <QDebug>
#include <QFile>
#include <QByteArray>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_openButton_clicked()
{

    // ASCII : value name / Hex : value name.toHex()
    // Print File Header
    File Obj;
    QByteArray patFile = Obj.readAll();

    printFileHeader(&patFile);

    // Print Common Header
    printCommonHeader(&patFile);
}

void Widget::printFileHeader(QByteArray *patFile)
{
    File Obj;
    ui->textEdit->setPlainText("1. FileHeaderDiscemmentCode : ");
    ui->textEdit->append(Obj.readFileHeaderDiscemmentCode(patFile).toHex());
    ui->textEdit->append("2. FileHeaderSourceFileName : ");
    ui->textEdit->append(Obj.readFileHeaderSourceFileName(patFile));
    ui->textEdit->append("3. FileHeaderCompileDate : ");
    ui->textEdit->append(Obj.readFileHeaderCompileDate(patFile));
    ui->textEdit->append("4. FileHeaderCompileTime : ");
    ui->textEdit->append(Obj.readFileHeaderCompileTime(patFile));
    ui->textEdit->append("5. FileHeaderCompilerVersion : ");
    ui->textEdit->append(Obj.readFileHeaderCompilerVersion(patFile));
    ui->textEdit->append("6. FileHeaderFlagCommonModuleExist : ");
    ui->textEdit->append(Obj.readFileHeaderFlagCommonModuleExist(patFile).toHex());
    ui->textEdit->append("7. FileHeaderCountOfBlock : ");
    ui->textEdit->append(Obj.readFileHeaderCountOfBlock(patFile).toHex());
    ui->textEdit->append("8. FileHeaderOffsetsOfCommon : ");
    ui->textEdit->append(Obj.readFileHeaderCountOfBlock(patFile).toHex());
    ui->textEdit->append("9. FileHeaderOffsetsOfBlocks : ");
    ui->textEdit->append(Obj. readFileHeaderOffsetsOfBlocks(patFile).toHex());
    ui->textEdit->append("10. FileHeaderStartAddressArra : ");
    ui->textEdit->append(Obj. readFileHeaderStartAddressArray(patFile).toHex());
    ui->textEdit->append("11. FileHeaderRemark : ");
    ui->textEdit->append(Obj. readFileHeaderRemark(patFile).toHex());
    ui->textEdit->append("12. FileHeaderDataOfIlMode : ");
    ui->textEdit->append(Obj. readFileHeaderDataOfIlMode(patFile).toHex());
    ui->textEdit->append("13. FileHeaderReserved : ");
    ui->textEdit->append(Obj. readFileHeaderReserved(patFile).toHex());
}

void Widget::printCommonHeader(QByteArray *patFile)
{
    File Obj;
    ui->textEdit->append("14. readCommonHeaderOpcodeNDataSet32 : ");
    ui->textEdit->append(Obj.readCommonHeaderOpcodeNDataSet32(patFile).toHex());
    ui->textEdit->append("15. readCommonHeaderOpcodeNDataSet64 : ");
    ui->textEdit->append(Obj.readCommonHeaderOpcodeNDataSet64(patFile).toHex());
    ui->textEdit->append("16. readCommonHeaderReserved : ");
    ui->textEdit->append(Obj.readCommonHeaderReserved(patFile).toHex());
}

void Widget::on_clearButton_clicked()
{
    ui->textEdit->clear();
}

void Widget::on_findButton_clicked()
{
    FindKeywordDialog * dialog = new FindKeywordDialog(this);

    dialog->show();
    dialog->raise();
    dialog->activateWindow();

}
