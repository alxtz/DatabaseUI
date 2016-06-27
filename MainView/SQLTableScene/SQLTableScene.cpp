#include <QDebug>
#include <QBrush>
#include <QImage>
#include <QColor>
#include <QComboBox>
#include <QPen>
#include "SQLTableScene.h"

SQLTableScene::SQLTableScene()
{
    qDebug()<<"test alive 1";

    setSceneRect ( 0 , 0 , 800 , 600 );
    //setBackgroundBrush (QBrush(QImage("./Resources/Images/background.png")));
    setBackgroundBrush (QBrush(QColor(252,255,171)));

    //titleText
    titleText = new TitleText();
    addItem(titleText);

    qDebug()<<"test alive 2";

    //add a comboBox for choosing the table
    QPen pen;
    pen.setWidth(2);
    pen.setColor(QColor(67 , 49 , 158));
    qDebug()<<"test alive 2.1";
    tableComboBox = new CustomComboBox();
    tableComboBox->setPen (pen);
    tableComboBox->popoutList->setPen(Qt::NoPen);
    qDebug()<<"test alive 2.2";
    for(int i=0; i<tableComboBox->popoutList->optionList.size(); ++i)
    {
        tableComboBox->popoutList->optionList.at(i)->setPen(Qt::NoPen);
    }
    addItem(tableComboBox);
    qDebug()<<"test alive 3";

}
