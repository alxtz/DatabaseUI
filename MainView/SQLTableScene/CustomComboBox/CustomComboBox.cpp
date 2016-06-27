#include <QPixmap>
#include <QBrush>
#include <QColor>
#include <QDebug>
#include <iostream>
#include "CustomComboBox.h"

using namespace std;

CustomComboBox::CustomComboBox()
{
    qDebug()<<"test alive 4";

    setRect( 0 , 0 , 180 , 25);
    setPos(310 , 80);

    //set the brush
    setBrush (QBrush(QColor(56 , 201 , 143)));

    //set the currentTableText
    currentTableText = "CODE_DAY";

    //set the table's text
    currentTable = new QGraphicsTextItem(this);
    currentTable->setPlainText (currentTableText);
    currentTable->setPos (0 , 0);

    qDebug()<<"test alive 5";

    //set the down arrow
    downArrow = new QGraphicsPixmapItem(this);
    downArrow->setPixmap (QPixmap("./Resources/Images/downArrow.png"));
    downArrow->setPos(160 , 5+1);

    //set the table list
    tableList.push_back (QString("CODE_COMPANY_MAIN"));
    tableList.push_back (QString("CODE_DAY"));
    tableList.push_back (QString("CODE_HARBOR"));
    tableList.push_back (QString("CODE_TEU_RANGE"));
    tableList.push_back (QString("CODE_VESSEL_SIZE"));
    tableList.push_back (QString("REPORT_B01"));
    tableList.push_back (QString("REPORT_B02"));
    tableList.push_back (QString("REPORT_B04"));
    tableList.push_back (QString("REPORT_B08"));
    tableList.push_back (QString("REPORT_B012"));
    tableList.push_back (QString("REPORT_B016"));
    tableList.push_back (QString("REPORT_MAP_PORT"));
    tableList.push_back (QString("REPORT_TITLE"));
    tableList.push_back (QString("TEMP_LIST_LOOP"));

    qDebug()<<"test alive 6";

    //set the popoutList
    popoutList = new PopoutList(this);

    qDebug()<<"test alive 7";

    /*
    //set the popoutList
    cout<<"the table list size is : "<<tableList.size ()<<endl;
    popoutList = new QGraphicsRectItem(this);
    popoutList->setRect ( 0 , 0 , this->boundingRect ().width () , this->boundingRect ().height ()*tableList.size () );
    popoutList->setPos (0 , this->boundingRect ().height ());
    popoutList->setVisible (true);

        //set each option rect
        for(int i=0; i<tableList.size (); ++i)
        {
            QGraphicsRectItem * eachOption = new QGraphicsRectItem(popoutList);
            eachOption->setRect ( 0 , 0 , this->boundingRect ().width () , this->boundingRect ().height ());
            eachOption->setPos (0 , i*this->boundingRect ().height ());
                //set a text for each option
                QGraphicsTextItem * optionText = new QGraphicsTextItem(eachOption);
                optionText->setPlainText (tableList.at(i));
                optionText->setPos(0 , 0);
            eachOptionList.push_back (eachOption);
        }
    */
}
