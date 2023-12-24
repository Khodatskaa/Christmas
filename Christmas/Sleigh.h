#ifndef Sleigh_h
#define Sleigh_h

class Sleigh
{
public:
    Sleigh(int initialPosition);
    void moveLeft();
    void moveRight();
    void moveUp();
    void moveDown();
    int getPosition() const;

private:
    int position;
};

#endif 
