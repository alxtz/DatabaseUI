#include <QFont>
#include "TitleText.h"

TitleText::TitleText()
{
    setPlainText("Database Query System");
    setDefaultTextColor(Qt::red);
    setFont(QFont("SansSerif" , 20));
    setPos(250 , 0);
}
