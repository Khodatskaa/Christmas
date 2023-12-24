#include "Sleigh.h"

Sleigh::Sleigh(int initialPosition)
{
	position = initialPosition;
}

void Sleigh::moveLeft()
{
	position--;
}

void Sleigh::moveRight()
{
	position++;
}

void Sleigh::moveUp()
{
	position -= 10;
}

void Sleigh::moveDown()
{
	position += 10;
}

int Sleigh::getPosition() const
{
	return position;
}
