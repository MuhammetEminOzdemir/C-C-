#ifndef  Nokta_h
#define Nokta_h
class Nokta
{
public:

	Nokta(int =0,int =0);//koordinat sistemini 0 ,1 veya 2 paremetli yapýcý 
	int Getx(); //x koordinatýný getir 
	int Gety(); //y koordinatýný getir 
	void SetX(int); // x kooordinatýný deðiþtir 
	void SetY(int); //y koordinatýný deðiþtir
	void SetXY(int, int); //x ve y koordinatlarýný deðiþtir.

private:
	int x, y; //x ve y koordinatlarý

};
#endif 



