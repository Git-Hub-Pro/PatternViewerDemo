#ifndef FINDKEYWORD_H
#define FINDKEYWORD_H

#include <QWidget>

namespace Ui {
class FindKeyWord;
}

class FindKeyWord : public QWidget
{
    Q_OBJECT

public:
    explicit FindKeyWord(QWidget *parent = 0);
    ~FindKeyWord();

private:
    Ui::FindKeyWord *ui;
};

#endif // FINDKEYWORD_H
