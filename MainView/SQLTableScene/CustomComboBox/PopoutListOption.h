#ifndef POPOUTLISTOPTION_H
#define POPOUTLISTOPTION_H


#include <QObject>
#include <QGraphicsRectItem>
#include <QGraphicsTextItem>
#include <QGraphicsSceneMouseEvent>

class PopoutListOption : public QObject ,  public QGraphicsRectItem
{
    Q_OBJECT

    public:
        PopoutListOption(QGraphicsItem * parent = 0);

        void setQString(QString inputQString);

        QGraphicsTextItem * optionText;
        int order;

        void mousePressEvent( QGraphicsSceneMouseEvent * event );
        void hoverEnterEvent( QGraphicsSceneHoverEvent *event);
        void hoverLeaveEvent( QGraphicsSceneHoverEvent * event);

    signals:
        void hovered(int);
};

#endif // POPOUTLISTOPTION_H
