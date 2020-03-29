#ifndef PLAYER_H
#define PLAYER_H

#include <QGraphicsPixmapItem>

class player: public QGraphicsPixmapItem
{
public:
    player();
    void set_pos(int x);
    int get_pos();
private:
    int posX;
};

#endif // PLAYER_H
