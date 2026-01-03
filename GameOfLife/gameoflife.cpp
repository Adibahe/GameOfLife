#include <stdlib.h>
#include <stdio.h>
#include "../includes/ConsoleGameFramework.cpp"
#include <cstdlib>

class 
Dummy: public Engine{

    public:

        Sprite tile;
        uint32_t cells;
        bool *board;
        float density = 0.25f; // 30% alive

        ~Dummy(){
            delete[] board;
        }

        bool load() override{
            cells = (secScreenWidth/2) * secScreenHeight;
            board = new bool[cells];
            srand(time(0)); // for generating varying random number each time this programm

            tile = LoadSpriteFromFile("GameOfLife/tile.txt");
            std::memset(board, 1, cells * sizeof(bool)); // writes every cells false or dead

            // // load initial state
            for(int i = 0; i < cells; i++) {
                board[i] = (rand()/(float)RAND_MAX) < density; // every cell has a chance of begin alive which is equivalent to density
            }

            return true;
        }

        bool update(float elapsedt) override{
            // displays current state

            for(int y = 0; y < secScreenHeight; y++){
                for(int x  = 0; x < secScreenWidth/2; x++){
                    tile.point.x = x * 2; tile.point.y = y;

                    int index = y * (secScreenWidth/2) + x;
                    if(board[index]) {DrawSprite(tile);}
                }
            }
            return true;
        }

        bool render(){
            Compose();
            writePrimaryScreenBuffer();
            return true;
        }
};

int
WINAPI WinMain (HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)
{
    Dummy game;
    game.keepBorder = 0;
    game.run(8,16,140,40);
    return EXIT_SUCCESS;
}