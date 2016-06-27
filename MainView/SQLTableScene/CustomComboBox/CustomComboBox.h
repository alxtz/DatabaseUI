#ifndef CUSTOMCOMBOBOX_H
#define CUSTOMCOMBOBOX_H


#include <QObject>
#include <QGraphicsRectItem>
#include <vector>
#include "PopoutList.h"

using namespace std;

class CustomComboBox : public QObject , public QGraphicsRectItem
{
    Q_OBJECT

    public:
        CustomComboBox();

        //default graphic widgets
        QString currentTableText;
        QGraphicsTextItem * currentTable;
        QGraphicsPixmapItem * downArrow;

        //default table list
        vector<QString> tableList;

        //popoutList item
        PopoutList * popoutList;
};


#endif // CUSTOMCOMBOBOX_H
