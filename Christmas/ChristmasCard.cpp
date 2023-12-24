#include "ChristmasCard.h"
#include <iostream>
#include <Windows.h> 

ChristmasCard::ChristmasCard() : userText("") {
    calculateFrameWidth();
}

ChristmasCard::ChristmasCard(const std::string& userText) : userText(userText) {
    calculateFrameWidth();
}

void ChristmasCard::calculateFrameWidth() {
    frameWidth = userText.length() + 4;

    if (frameWidth < 20) {
        frameWidth = 20;
    }

    if (frameWidth % 2 != 0) {
        frameWidth += 1;
    }

    if (frameWidth > 40) {
        frameWidth = 40;
    }
}

void ChristmasCard::printFrame() const {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED);

    std::cout << "+";
    for (int i = 0; i < frameWidth; ++i) {
        std::cout << "-";
    }
    std::cout << "+" << std::endl;

    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}

void ChristmasCard::printText(const std::string& text) const {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED);

    std::cout << "| " << text;
    int numSpaces = frameWidth - text.length() - 1;
    for (int i = 0; i < numSpaces; ++i) {
        std::cout << " ";
    }
    std::cout << "|" << std::endl;

    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}

void ChristmasCard::displayCard() const {
    printFrame();
    printText("From: Santa");
    printText(userText);
    printText("Merry Christmas!");
    printFrame();
}
