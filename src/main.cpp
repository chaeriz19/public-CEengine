#include "engine_lib.h"
#include "platform.h"
#include "input.h"

#include "game.cpp"

#define APIENTRY
#define GL_GLEXT_PROTOTYPES
#include "glcorearb.h"
// Windows
#ifdef _WIN32
#include "win32_platform.cpp"
#endif

#include "gl_renderer.cpp"

int main() {
    BumpAllocator transientStorage = make_bump_allocator(MB(50));
    platform_create_window(1200, 720, "Cengine");
    input.screenSizeX = 1200;
    input.screenSizeY = 720;

    gl_init(&transientStorage);

    SM_TRACE("Running");
    while(running) {
        platform_update_window();
        update_game();
        gl_render();
        platform_swap_buffers();
    }
    return 0;
}