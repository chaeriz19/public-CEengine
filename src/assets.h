#pragma once
#include "engine_lib.h"

// const

// struct

enum SpriteID 
{
    SPRITE_TEST,
    SPRITE_COUNT // count
};

struct Sprite 
{
    IVec2 atlasOffset;
    IVec2 spriteSize;
};

// func

Sprite get_sprite(SpriteID spriteID) {
    Sprite sprite = {};

    switch(spriteID) {
        case SPRITE_TEST:
        {
            printf("Got sprite SPRITE_TEST\n");
            sprite.atlasOffset = {0,0};
            sprite.spriteSize = {16,16};
        }
    }
    // todo: remove
    
    return sprite;
};