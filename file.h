#ifndef FILE_H
#define FILE_H
#include <QString>
#include <QWidget>

class File : public QWidget
{

public:
    QString getFilePath();
    QByteArray readAll();

    //File Header : 0 ~ 688
    QByteArray readFileHeaderDiscemmentCode(QByteArray * patFile);        // 1.  readFileHeaderDiscemmentCode() format | size : 4 byte  | scope : 0~4    | HEX
    QByteArray readFileHeaderSourceFileName(QByteArray * patFile);        // 2.  readFileHeaderSourceFileName format | size : 36 byte | scope : 4~40   | ASCII
    QByteArray readFileHeaderCompileDate(QByteArray * patFile);           // 3.  readFileHeaderCompileDate format | size : 8 byte  | scope : 40~48  | ASCII
    QByteArray readFileHeaderCompileTime(QByteArray * patFile);           // 4.  readFileHeaderCompileTime format | size : 8 byte  | scope : 48~56  | ASCII
    QByteArray readFileHeaderCompilerVersion(QByteArray * patFile);       // 5.  readFileHeaderCompilerVersion format | size : 8 byte  | scope : 56~64  | ASCII
    QByteArray readFileHeaderFlagCommonModuleExist(QByteArray * patFile); // 6.  readFileHeaderFlagCommonModuleExist format | size : 4 byte  | scope : 64~68  | HEX
    QByteArray readFileHeaderCountOfBlock(QByteArray * patFile);          // 7.  readFileHeaderCountOfBlock() format | size : 4 byte  | scope : 68~72  | HEX
    QByteArray readFileHeaderOffsetsOfCommon(QByteArray * patFile);       // 8.  readFileHeaderOffsetsOfCommon format | size : 4 byte  | scope : 72~76  | HEX
    QByteArray readFileHeaderOffsetsOfBlocks(QByteArray * patFile);       // 9.  readFileHeaderOffsetsOfBlocks format | size : 256 byte| scope : 76~332 | HEX
    QByteArray readFileHeaderStartAddressArray(QByteArray * patFile);     // 10. readFileHeaderStartAddressArray | size : 256 byte| scope : 332~588| HEX
    QByteArray readFileHeaderRemark(QByteArray * patFile);                // 11. readFileHeaderRemark | size : 80 byte | scope : 588~668| HEX
    QByteArray readFileHeaderDataOfIlMode(QByteArray * patFile);          // 12. readFileHeaderDataOfIlMode | size : 4 byte  | scope : 668~672| HEX
    QByteArray readFileHeaderReserved(QByteArray * patFile);              // 13. readFileHeaderReserved | size : 16 byte | scope : 672~688| HEX

    //Common Header 688 ~ 704
    QByteArray readCommonHeaderOpcodeNDataSet32(QByteArray * patFile);   // 14.  readCommonHeaderOpcodeNDataSet32 format | size : 4 byte  | scope : 688~692    | HEX
    QByteArray readCommonHeaderOpcodeNDataSet64(QByteArray * patFile);   // 15.  readCommonHeaderOpcodeNDataSet64 format | size : 4 byte | scope : 692~696   | HEX
    QByteArray readCommonHeaderReserved(QByteArray * patFile);           // 16.  readCommonHeaderReserved format | size : 8 byte  | scope : 696~704  | HEX


};



#endif // FILE_H
