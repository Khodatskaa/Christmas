#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Game.h"

Game::Game() : sleigh(10), giftPosition(0) {
    srand(static_cast<unsigned>(time(0)));
}

void Game::drawGame() const {
    system("cls");

    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < gridSize; ++j) {
            if (i == 9 && j == sleigh.getPosition()) {
                std::cout << "S";
            }
            else if (i == 0 && j == giftPosition) {
                if (sleigh.getPosition() == giftPosition) {
                    std::cout << "P"; 
                }
                else {
                    std::cout << "G";
                }
            }
            else {
                std::cout << ".";
            }
        }
        std::cout << std::endl;
    }

    if (sleigh.getPosition() == giftPosition) {
        christmasCard.displayCard();
    }
}

void Game::play() {
    char input;
    while (true) {
        drawGame();

        std::cout << "Move Santa's sleigh (L/R/U/D): ";
        std::cin >> input;

        if (input == 'L' || input == 'l') {
            sleigh.moveLeft();
        }
        else if (input == 'R' || input == 'r') {
            sleigh.moveRight();
        }
        else if (input == 'U' || input == 'u') {
            sleigh.moveUp();
        }
        else if (input == 'D' || input == 'd') {
            sleigh.moveDown();
        }

        if (rand() % 3 == 0) {
            giftPosition = rand() % gridSize;
        }

        if (sleigh.getPosition() == giftPosition) {
            drawGame(); 
            std::cout << "Santa caught the gift! Merry Christmas!" << std::endl;
            break;
        }
    }
}
