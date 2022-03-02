#include "Nokta.h"
Nokta::Nokta(int pX, int pY)
{
	x = pX;
	y = pY;
}
int Nokta::Getx()
{
	return x;
}
int Nokta::Gety()
{
	return y;
}
void Nokta::SetX(int pX)
{
	x = pX;
}
void Nokta::SetY(int pY)
{
	x = pY;
}
void Nokta::SetXY(int pX,int pY)
{
	x = pX;
	x = pY;
}