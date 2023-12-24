#ifndef SANTA_H
#define SANTA_H

#include <string>

class Santa {
public:
    Santa(const std::string& name);
    void deliverGift() const;
    std::string getName() const;

private:
    std::string name;
};

#endif 