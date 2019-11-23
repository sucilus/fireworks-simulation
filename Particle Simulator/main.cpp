#include <iostream>
#include "Screen.hpp"
#include <SDL2/SDL.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include "Swarm.hpp"
using namespace std;
int main() {
    
    srand(time(NULL)); 
    Screen screen;
    if(screen.init() == false) {
        cout<< "Error initializing SDL. " <<endl;
    }
    Swarm swarm;

    while(1) {
        // Update Particles
        // Draw Particles
        // Check for messages/events
        int elapsed = SDL_GetTicks();
        
        swarm.update(elapsed);
        
        unsigned char green = (unsigned char) ((sin(elapsed * 0.001) + 1) * 128);
        unsigned char red = (unsigned char) ((sin(elapsed * 0.003) + 1) * 128);
        unsigned char blue = (unsigned char) ((sin(elapsed * 0.0023) + 1) * 128);
        
        const Particle * const pParticles = swarm.getParticles();
        for(int i=0 ; i<Swarm::NPARTICLES; i++) {
            Particle particle = pParticles[i];
            int x = (particle.m_x + 1) * Screen::SCREEN_WIDTH/2;
            int y = particle.m_y * Screen::SCREEN_WIDTH/2 + Screen::SCREEN_HEIGHT/2;
            
            screen.setPixel(x, y, red, green, blue);  
        }
        screen.boxBlur();
        screen.update(); //draw the screen
        if (!screen.processEvents()) {
            break;
        }
        
    }
    
    screen.close();
    
    return 0;
}
