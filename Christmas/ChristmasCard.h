#ifndef CHRISTMAS_CARD_H
#define CHRISTMAS_CARD_H

#include <string>

class ChristmasCard {
public:
    ChristmasCard();  
    ChristmasCard(const std::string& userText);
    void displayCard() const;

private:
    std::string userText;
    int frameWidth;  
    void calculateFrameWidth();  
    void printFrame() const;
    void printText(const std::string& text) const;
};

#endif 
