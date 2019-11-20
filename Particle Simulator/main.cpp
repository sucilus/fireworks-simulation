#include <iostream>
#include "Screen.hpp"
#include <SDL2/SDL.h>
#include <math.h>
using namespace std;
int main() {
    
    
    Screen screen;
    if(screen.init() == false) {
        cout<< "Error initializing SDL. " <<endl;
    }
    

    while(1) {
        // Update Particles
        // Draw Particles
        // Check for messages/events
        int elapsed = SDL_GetTicks();
        unsigned char green = (unsigned char) ((sin(elapsed * 0.001) + 1) * 128);
        unsigned char red = (unsigned char) ((sin(elapsed * 0.003) + 1) * 128);
        unsigned char blue = (unsigned char) ((sin(elapsed * 0.0023) + 1) * 128);
        //Draw particles
        for(int y=0; y < Screen::SCREEN_HEIGHT; y++) {
            for(int x=0; x < Screen::SCREEN_WIDTH; x++) {
                screen.setPixel(x,y,red,green,blue);
            }
        }
        
        screen.update(); //draw the screen
        if (!screen.processEvents()) {
            break;
        }
        
    }
    
    screen.close();
    
    return 0;
}
