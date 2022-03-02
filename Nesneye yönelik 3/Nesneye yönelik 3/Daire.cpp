#include "Daire.h"
#include<stdio.h>

using namespace std;

Daire::Daire(double cap)
{
	
	yaricap=cap;

}

double Daire::CevreHesapla()
{
	return 2 * 3.14*yaricap;
}
double Daire::AlanHesapla()
{
	return 3.14*yaricap*yaricap;
}