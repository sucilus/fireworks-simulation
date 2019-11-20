//
//  Screen.hpp
//  Particle Simulator
//
//  Created by Dongyoon Lee on 2019-11-19.
//  Copyright © 2019 sucilus. All rights reserved.
//

#ifndef Screen_hpp
#define Screen_hpp
#include <SDL2/SDL.h>

#include <stdio.h>
class Screen {
public:
    const static int SCREEN_WIDTH = 800;
    const static int SCREEN_HEIGHT = 600;
private:
    SDL_Window *m_window;
    SDL_Renderer *m_renderer;
    SDL_Texture *m_texture;
    Uint32 *m_buffer;
public:
    Screen();
    bool init();
    void update();
    void setPixel(int x, int y, Uint8 red, Uint8 green, Uint8 blue);
    bool processEvents();
    void close();
};

#endif /* Screen_hpp */
