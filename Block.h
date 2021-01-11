#ifndef BLOCK_H_INCLUDED
#define BLOCK_H_INCLUDED

#include <allegro5/allegro.h>
#include "Object.h"
#include "global.h"
enum BlockType {
    BACKGROUND, WALL, ROAD, BREAKABLE_ONE, SHOP, DOOR, BREAKABLE_TWO, GOAL, SHOP_FLAG
};


class Block:public Object{
public:
    Block(int, int, BlockType, ALLEGRO_BITMAP*, ALLEGRO_BITMAP*);
    ~Block(){};
    void pass_beat();
    void change_animation();
    void draw();
    void delete_wall();
    int get_level();
private:
    BlockType type;
    int level;
    int beat_of_change;
    int beat_cnt;
    bool beat;
    int tempo;
    int num_of_action = 4;
    int cur_action;
    ALLEGRO_BITMAP* torch_in_wall;
};


#endif