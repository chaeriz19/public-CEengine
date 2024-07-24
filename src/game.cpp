#include "assets.h"
#include "engine_lib.h"
#include "render_interface.h"

// const

// structs

// functions

void update_game() {
    printf("Drawing sprite \n");
    draw_sprite(SPRITE_TEST, {100.0f, 100.0f}, {100.0f, 100.0f});
}