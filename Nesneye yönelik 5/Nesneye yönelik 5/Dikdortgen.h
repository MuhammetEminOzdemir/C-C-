//Uzayda bir dikdörtgeni sol üst ile sað alt 
//köþelerinin kooordinatlarýný ile temsil eden 
//kullanýcý tanýmlý veri tipi

#ifndef Didortgen_h
#define Didortgen_h
#include "Nokta.h"
class Dikdortgen
{
public:
	Dikdortgen(Nokta, Nokta); //2 parametreli yapýcý
	Nokta GetSolUst(); //sol üst koordinatý getirir.
	Nokta GetSagAlt(); //sað alt koordinatý getirir.
	void SetSolUst(Nokta); //sol üst koordinatýný deðiþtir.
	void SetSagAlt(Nokta); //sað alt koordinatýý deðiþtirir.
	void SetSolUstSagAlt(Nokta, Nokta);
	int Alan(); //dikdörtgeini alaný
	bool IcindeMi(Nokta);// Parametre dikdörtgen içerisinde mi diye kontrol etcek 
private: 

	Nokta solUst;
	Nokta sagAlt;
	//nokta sýnýflý solust ve saðalt diye iki tane nesne tanýmlandý.
};
#endif // !1



