#include "health.h"
#include <QFont>
#include "game.h"
#include "button.h"


extern Game* game;

Health::Health(QGraphicsItem *parent) : QGraphicsTextItem(parent)
{
    //Initialize the score to zero
    health = 100;

    //Draw the text
    setPlainText(QString("Ship Health: ") + QString::number(health));
    setDefaultTextColor(Qt::green);
    setFont(QFont("consolas", 16));
}

void Health::decrease()
{
    health -= 2;
    setPlainText(QString("Ship Health: ") + QString::number(health));
}

void Health::ramDecrease()
{
    health -= 10;
    setPlainText(QString("Ship Health: ") + QString::number(health));
}

void Health::checkHealth()
{
    if (health == 0)
    {

    }
}

int Health::getHealth()
{
    return health;
}
