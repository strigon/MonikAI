#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include "mainWindow.h"


void main_window::init(){

    SDL_Init(SDL_INIT_VIDEO);
    SDL_Window* mainWin;
    SDL_Renderer* mainRand;
    int xScreen;
    int yScreen;
    SDL_DisplayMode dm;
    SDL_GetDesktopDisplayMode(0, &dm);
    SDL_Rect dst = {0, 0, 343, 343};

    //Here, I need to add something that take the location in the parameter if on is set

    xScreen = dm.w - 343;
    yScreen = dm.h - 343;

    mainWin = SDL_CreateWindow("MonikAI", xScreen, yScreen, 343, 343, SDL_WINDOW_BORDERLESS | SDL_WINDOW_ALWAYS_ON_TOP);
    mainRand = SDL_CreateRenderer(mainWin, -1, SDL_RENDERER_ACCELERATED);

    SDL_RenderClear(mainRand);

    IMG_Init(IMG_INIT_PNG);
    SDL_Surface* monikaBody = IMG_Load("monika/1a.png");
    SDL_Texture* monikaBodyText = SDL_CreateTextureFromSurface(mainRand, monikaBody);
    
    SDL_FreeSurface(monikaBody);


    while (1) {
        SDL_Event e;
        if (SDL_PollEvent(&e)) {
            if (e.type == SDL_QUIT) {
                break;
            }
        }

        SDL_RenderClear(mainRand);

        SDL_RenderCopy(mainRand, monikaBodyText, NULL, &dst);
        SDL_RenderPresent(mainRand);
    }
    SDL_DestroyTexture(monikaBodyText);
    SDL_DestroyRenderer(mainRand);
    SDL_DestroyWindow(mainWin);

    SDL_Quit();
}
