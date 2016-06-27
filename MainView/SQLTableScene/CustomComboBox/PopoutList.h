#ifndef POPOUTLIST_H
#define POPOUTLIST_H


#include <QObject>
#include <QGraphicsRectItem>
#include <vector>
#include "PopoutListOption.h"

using namespace std;

class PopoutList : public QObject , public QGraphicsRectItem
{
    Q_OBJECT

    public:
        PopoutList(QGraphicsItem * parent = 0);

        void setList();

        void * parentComboBox;

        vector<PopoutListOption *> optionList;

    public slots:
        void changeColor(int order);


};

#endif // POPOUTLIST_H
