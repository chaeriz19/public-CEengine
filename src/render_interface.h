#pragma once
#include "engine_lib.h"
#include "assets.h"

// render const
constexpr int MAX_TRANSFORMS = 1000;


// structs
struct Transform
{
    IVec2 atlasOffset;
    IVec2 spriteSize;
    Vec2 pos;
    Vec2 size;
};

struct RenderData {
    int transformCount;
    Transform transforms[MAX_TRANSFORMS];
};

// render globals

static RenderData renderData;


void draw_sprite(SpriteID spriteID, Vec2 pos, Vec2 size) {
    Sprite sprite = get_sprite(spriteID);
    Transform transform = {};
    transform.pos = pos;
    transform.size = size;
    transform.atlasOffset = sprite.atlasOffset;
    transform.spriteSize = sprite.spriteSize;
    renderData.transforms[renderData.transformCount++] = transform;
};