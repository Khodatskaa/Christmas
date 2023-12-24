#include "ChristmasCard.h"
#include <iostream>

ChristmasCard::ChristmasCard() {}

void ChristmasCard::printFrame() const {
    std::cout << "+--------------------------+" << std::endl;
}

void ChristmasCard::printText(const std::string& text) const {
    std::cout << "| " << text;
    int numSpaces = 26 - text.length();
    for (int i = 0; i < numSpaces; ++i) {
        std::cout << " ";
    }
    std::cout << "|" << std::endl;
}

void ChristmasCard::displayCard() const {
    printFrame();
    printText("From: Santa");
    printText("       Merry Christmas");
    printFrame();
}
