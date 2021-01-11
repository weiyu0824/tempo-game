#include "Dagger.h"
Dagger::Dagger(ALLEGRO_BITMAP* img,ALLEGRO_BITMAP* slot_img, int x, int y):Item(img, slot_img){
    //
    pos_x = x;
    pos_y = y;
    item_type = attack_tool;
    item_level = 1;
    num_animation = 1;
    //
    power = 1;

}

Dagger::Dagger(ALLEGRO_BITMAP* img,ALLEGRO_BITMAP* slot_img ):Item(img, slot_img){
    //
    item_type = attack_tool;
    item_level = 1;
    num_animation = 1;
    //
    power = 1;

}
