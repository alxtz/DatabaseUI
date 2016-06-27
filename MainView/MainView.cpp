#include <QDebug>
#include "MainView.h"

MainView::MainView(QWidget * parent)
 : QGraphicsView(parent)
{
    setFixedSize (802 , 602);

    qDebug()<<"test alive in View";

    //set the scene
    sqlTableScene = new SQLTableScene();
    setScene (sqlTableScene);
}
