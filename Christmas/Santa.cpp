#include "Santa.h"
#include <iostream>

Santa::Santa(const std::string& name) : name(name) {}

void Santa::deliverGift() const {
    std::cout << "Ho Ho Ho! " << name << " is delivering a gift!" << std::endl;
}

std::string Santa::getName() const {
    return name;
}

