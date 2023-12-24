#ifndef CHRISTMAS_CARD_H
#define CHRISTMAS_CARD_H

#include <string>

class ChristmasCard {
public:
    ChristmasCard();
    void displayCard() const;

private:
    void printFrame() const;
    void printText(const std::string& text) const;
};

#endif 
