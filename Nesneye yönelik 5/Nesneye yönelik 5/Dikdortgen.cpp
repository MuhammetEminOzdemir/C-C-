#include "Dikdortgen.h"
#include <cmath>
Dikdortgen::Dikdortgen(Nokta a,Nokta b)
{
	//bir nokta nesnesini baþka bir nokta nesnesine atama
	solUst = a;
	sagAlt = b;
}
Nokta Dikdortgen::GetSolUst()
{
	return solUst;
}
Nokta Dikdortgen::GetSagAlt()
{
	return sagAlt;
}
void Dikdortgen::SetSolUst(Nokta a)
{
	solUst = a;
}
void Dikdortgen::SetSagAlt(Nokta b)
{
	sagAlt = b;
}
void Dikdortgen::SetSolUstSagAlt(Nokta a, Nokta b)
{
	solUst = a;
	sagAlt = b;
}
int Dikdortgen::Alan()
{
	int kenar1 = (int)fabs((double)(solUst.Getx() - sagAlt.Getx()));
	int kenar2 = (int)fabs((double)(solUst.Gety() - sagAlt.Gety()));
	return kenar1 * kenar2;
}
bool Dikdortgen::IcindeMi(Nokta n)
{
	bool kosul1 = (n.Getx() > solUst.Getx()) && (n.Getx() < sagAlt.Getx());
	bool kosul2 = (n.Gety() > sagAlt.Gety()) && (n.Gety() < solUst.Gety());
	return kosul1 && kosul2;
}