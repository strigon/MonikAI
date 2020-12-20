#include <SDL2/SDL.h>
#include "mainWindow.h"

int main(int argc, char* argv[]){
    if(argc > 1)
    {
        for(int i = 1; i < argc; i++){
            printf("ARGS ISN'T USEFUL YET, IGNORING %s \n", argv[1]);
        }
    }
    main_window mWin;
    mWin.init();
}