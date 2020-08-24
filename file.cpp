#include "file.h"
#include <QFileDialog>
#include <QFile>
#include <QString>
#include <QTextStream>
#include <QDebug>


QString File::getFilePath()
{
    QString filePath = QFileDialog::getOpenFileName(this,
          tr("Open Image"), "/home/unitest/Documents/QT", tr("Image Files (*.png *.jpg *.bmp *.pat);;Text files (*.txt)"));

    return filePath;
}

QByteArray File::readAll()
{
    File Obj;

    QString filePath = Obj.getFilePath();

    QFile file(filePath);

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return 0;

    return file.readAll(); //return value is QByteArray format

}

QByteArray File::readFileHeaderDiscemmentCode(QByteArray *patFile)
{
    // fileHeaderDiscemmentCode format | size : 4 byte  | scope : 0~4

    QByteArray fileHeaderDiscemmentCode;

    for(int i=0;i<4;i++)
    {
       fileHeaderDiscemmentCode.append(patFile->at(i));
    }

    return fileHeaderDiscemmentCode;
}

QByteArray File::readFileHeaderSourceFileName(QByteArray * patFile)
{
    // fileHeaderSourceFileName format | size : 36 byte | scope : 4~40

    QByteArray fileHeaderSourceFileName;

    for(int i=4;i<40;i++)
    {
       fileHeaderSourceFileName.append(patFile->at(i));
    }

    return fileHeaderSourceFileName;

}

QByteArray File::readFileHeaderCompileDate(QByteArray * patFile)
{
    // readFileHeaderCompileDate | size : 8 byte  | scope : 40~48

    QByteArray fileHeaderCompileDate;

    for(int i=40;i<48;i++)
    {
       fileHeaderCompileDate.append(patFile->at(i));
    }

    return fileHeaderCompileDate;
}

QByteArray File::readFileHeaderCompileTime(QByteArray * patFile)
{
    // readFileHeaderCompileTime format | size : 8 byte  | scope : 48~56
    QByteArray fileHeaderCompileTime;

    for(int i=48;i<56;i++)
    {
       fileHeaderCompileTime.append(patFile->at(i));
    }

    return fileHeaderCompileTime;

}

QByteArray File::readFileHeaderCompilerVersion(QByteArray * patFile)
{
    // readFileHeaderCompilerVersion format |  size : 8 byte  | scope : 56~64

    QByteArray fileHeaderCompilerVersion;

    for(int i=56;i<64;i++)
    {
       fileHeaderCompilerVersion.append(patFile->at(i));
    }

    return fileHeaderCompilerVersion;

}

QByteArray File::readFileHeaderFlagCommonModuleExist(QByteArray * patFile)
{
    // readFileHeaderFlagCommonModuleExist format | size : 4 byte  | scope : 64~68
    QByteArray fileHeaderFlagCommonModuleExist;

    for(int i=64;i<68;i++)
    {
       fileHeaderFlagCommonModuleExist.append(patFile->at(i));
    }

    return fileHeaderFlagCommonModuleExist;
}

QByteArray File::readFileHeaderCountOfBlock(QByteArray * patFile)
{
   // readFileHeaderCountOfBlock() format | size : 4 byte  | scope : 68~72  |
    QByteArray fileHeaderCountOfBlock;

    for(int i=68;i<72;i++)
    {
       fileHeaderCountOfBlock.append(patFile->at(i));
    }

    return fileHeaderCountOfBlock;

}
QByteArray File::readFileHeaderOffsetsOfCommon(QByteArray * patFile)
{
    // readFileHeaderOffsetsOfCommon format | size : 4 byte  | scope : 72~76  |
    QByteArray fileHeaderOffsetsOfCommon;

    for(int i=72;i<76;i++)
    {
       fileHeaderOffsetsOfCommon.append(patFile->at(i));
    }

    return fileHeaderOffsetsOfCommon;
}

QByteArray File::readFileHeaderOffsetsOfBlocks(QByteArray * patFile)
{
    // readFileHeaderOffsetsOfBlocks format | size : 256 byte| scope : 76~332 |
    QByteArray fileHeaderOffsetsOfBlocks;

    for(int i=76;i<332;i++)
    {
       fileHeaderOffsetsOfBlocks.append(patFile->at(i));
    }

    return fileHeaderOffsetsOfBlocks;

}

QByteArray File::readFileHeaderStartAddressArray(QByteArray * patFile)
{
    // readFileHeaderStartAddressArray | size : 256 byte| scope : 332~588|
    QByteArray fileHeaderStartAddressArray;

    for(int i=332;i<588;i++)
    {
       fileHeaderStartAddressArray.append(patFile->at(i));
    }

    return fileHeaderStartAddressArray;
}

QByteArray File::readFileHeaderRemark(QByteArray * patFile)
{
    // readFileHeaderRemark | size : 80 byte | scope : 588~668|
    QByteArray fileHeaderRemark;

    for(int i=588;i<668;i++)
    {
       fileHeaderRemark.append(patFile->at(i));
    }

    return fileHeaderRemark;

}

QByteArray File::readFileHeaderDataOfIlMode(QByteArray * patFile)
{
    // readFileHeaderDataOfIlMode | size : 4 byte  | scope : 668~672|

    QByteArray fileHeaderDataOfIlMode;

    for(int i=668;i<672;i++)
    {
       fileHeaderDataOfIlMode.append(patFile->at(i));
    }

    return fileHeaderDataOfIlMode;

}

QByteArray File::readFileHeaderReserved(QByteArray * patFile)
{
    // readFileHeaderReserved | size : 16 byte | scope : 672~688|
    QByteArray fileHeaderReserved;

    for(int i=672;i<688;i++)
    {
       fileHeaderReserved.append(patFile->at(i));
    }

    return fileHeaderReserved;

}


QByteArray File::readCommonHeaderOpcodeNDataSet32(QByteArray *patFile)
{
    // readCommonHeaderOpcodeNDataSet32 format | size : 4 byte  | scope : 688~692
    QByteArray commonHeaderOpcodeNDataSet32;

    for(int i=688;i<692;i++)
    {
       commonHeaderOpcodeNDataSet32.append(patFile->at(i));
    }

    return commonHeaderOpcodeNDataSet32;
}

QByteArray File::readCommonHeaderOpcodeNDataSet64(QByteArray *patFile)
{
    // readCommonHeaderOpcodeNDataSet64 format | size : 4 byte | scope : 692~696   | success
    QByteArray commonHeaderOpcodeNDataSet64;

    for(int i=692;i<696;i++)
    {
       commonHeaderOpcodeNDataSet64.append(patFile->at(i));
    }

    return commonHeaderOpcodeNDataSet64;

}

QByteArray File::readCommonHeaderReserved(QByteArray *patFile)
{
    // readCommonHeaderReserved format | size : 8 byte  | scope : 696~704  | success
    QByteArray commonHeaderReserved;

    for(int i=696;i<704;i++)
    {
       commonHeaderReserved.append(patFile->at(i));
    }

    return commonHeaderReserved;

}

