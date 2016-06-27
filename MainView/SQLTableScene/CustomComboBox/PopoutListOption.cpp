#include <QBrush>
#include <QColor>
#include <QDebug>
#include <QFont>
#include "PopoutListOption.h"

PopoutListOption::PopoutListOption(QGraphicsItem * parent)
 : QGraphicsRectItem(parent)
{
    setAcceptHoverEvents(true);

    //setBrush (QColor(Qt::blue));

    optionText = new QGraphicsTextItem(this);
}

void PopoutListOption::setQString(QString inputQString)
{
    optionText->setPlainText (inputQString);
    QFont foo("SansSerif" , 10);
    foo.setWeight (80);
    optionText->setFont (foo);
}

void PopoutListOption::mousePressEvent(QGraphicsSceneMouseEvent *event)
{

}

void PopoutListOption::hoverEnterEvent(QGraphicsSceneHoverEvent *event)
{
    qDebug()<<"Enter!";
    //emit hovered (order);
    this->setBrush (QColor(Qt::blue));
    optionText->setDefaultTextColor (Qt::white);
}

void PopoutListOption::hoverLeaveEvent(QGraphicsSceneHoverEvent *event)
{
    this->setBrush (QColor(Qt::white));
    optionText->setDefaultTextColor (Qt::black);
}
