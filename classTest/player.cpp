#include "player.h"

player::player()
{
    posX = 0;
}

void player::set_pos(int x){
    posX = x;
}

int player::get_pos() {
    return posX;
}
