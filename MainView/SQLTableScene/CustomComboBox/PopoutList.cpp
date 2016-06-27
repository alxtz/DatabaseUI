#include <QDebug>
#include <QBrush>
#include <QColor>
#include "PopoutList.h"
#include "CustomComboBox.h"

PopoutList::PopoutList(QGraphicsItem * parent)
 : QGraphicsRectItem(parent)
{
    qDebug()<<"test alive 8";

    parentComboBox = (void*)parent;

    setList();

    qDebug()<<"test alive 9";

    setBrush (QColor(Qt::white));
}

void PopoutList::setList()
{
    qDebug()<<"test alive 10";

    CustomComboBox * ccbPtr = (CustomComboBox*)parentComboBox;

    qDebug()<<"test alive 10.5";

    setRect ( 0 , 0 , 1 , 1 );
    setPos (0 ,1);

    qDebug()<<"test alive 11";

    for(int i=0; i<14; i++)
    {
        qDebug()<<"i is "<<i;
        PopoutListOption * newOption = new PopoutListOption(this);
        newOption->setRect ( 0 , 0 , 180 , 25);
        //newOption->setQString (ccbPtr->tableList.at(i));
        newOption->setPos (0 , 25*i );
        newOption->order = i;
        connect(newOption , SIGNAL(hovered(int)) , this , SLOT(changeColor(int)) );
        optionList.push_back (newOption);
    }

    qDebug()<<"test alive 12";

    qDebug()<<"Option list is "<<optionList.size();
}

void PopoutList::changeColor(int order)
{
    qDebug()<<order<<" needs to change color";
    optionList.at(order)->setBrush (QColor(Qt::blue));
}
