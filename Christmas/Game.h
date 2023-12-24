#ifndef GAME_H
#define GAME_H

#include "Sleigh.h"
#include "ChristmasCard.h"

class Game {
public:
    Game();
    void play();

private:
    Sleigh sleigh;
    ChristmasCard christmasCard;
    int giftPosition;
    static const int gridSize = 20;  
    void drawGame() const;
};

#endif 
