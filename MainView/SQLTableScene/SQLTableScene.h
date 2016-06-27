#ifndef SQLTABLESCENE_H
#define SQLTABLESCENE_H


#include <QGraphicsScene>
#include "TitleText.h"
#include "CustomComboBox/CustomComboBox.h"

class SQLTableScene : public QGraphicsScene
{
    public:
        SQLTableScene();

    private:
        TitleText * titleText;
        CustomComboBox * tableComboBox;

};


#endif // SQLTABLESCENE_H
