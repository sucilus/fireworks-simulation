#include <iostream>

#include <SDL2/SDL.h>
using namespace std;
int main() {
    
    const int SCREEN_WIDTH = 800;
    const int SCREEN_HEIGHT = 600;
    if( SDL_Init( SDL_INIT_EVERYTHING) < 0) {
        cout<<"SDL could not initialize SDL error:  " << SDL_GetError() <<endl;
    }
    cout<<"success"<<endl;
    SDL_Window *window = SDL_CreateWindow("Particle Fire Explosion", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
    if(window == NULL) {
        SDL_Quit();
        return 2;
    }
    bool quit = 0;
    SDL_Event event;
    while(!quit) {
        // Update Particles
        // Draw Particles
        // Check for messages/events
        
        while(SDL_PollEvent(&event)) {
            if(event.type == SDL_QUIT) quit = 1;
        }
    }
    
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}
