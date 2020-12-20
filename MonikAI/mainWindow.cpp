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

    //Here, I need to add something that take the location in the parameter if on is set

    xScreen = dm.w - 343;
    yScreen = dm.h - 343;

    mainWin = SDL_CreateWindow("MonikAI", xScreen, yScreen, 343, 343, SDL_WINDOW_BORDERLESS);
    mainRand = SDL_CreateRenderer(mainWin, -1, SDL_RENDERER_ACCELERATED);



    IMG_Init(IMG_INIT_PNG);
    SDL_Surface* monikaBody = IMG_Load("monika/1a.png");
    SDL_Texture* monikaBodyText = SDL_CreateTextureFromSurface(mainRand, monikaBody);

    SDL_Rect rect;
    rect.x=      0;
    rect.y=      0;
    rect.w=      434;
    rect.h=      434;
    SDL_SetRenderDrawBlendMode(mainRand, SDL_BLENDMODE_BLEND);
    SDL_SetRenderDrawColor(mainRand, 0, 0, 0, 0);
    SDL_RenderFillRect(mainRand, &rect);

    SDL_FreeSurface(monikaBody);

    while (1) {
        SDL_Event e;
        if (SDL_PollEvent(&e)) {
            if (e.type == SDL_QUIT) {
                break;
            }
        }

        SDL_RenderClear(mainRand);
        SDL_RenderCopy(mainRand, monikaBodyText, NULL, NULL);
        SDL_RenderPresent(mainRand);
    }
    SDL_DestroyTexture(monikaBodyText);
    SDL_DestroyRenderer(mainRand);
    SDL_DestroyWindow(mainWin);

    SDL_Quit();

}
