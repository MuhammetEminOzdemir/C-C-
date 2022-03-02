#include "SýcaklýkDönüþtürücü.h"
#include<stdio.h>
using namespace std;

SýcaklýkDönüþtürücü::SýcaklýkDönüþtürücü(double a, double b, double c)
{
	derece = a;
	fahrenhayt = b;
	santigrat = c;
}
double SýcaklýkDönüþtürücü::FahrenhaytHesapla()
{
	fahrenhayt = derece * 1.8 + 32;
	return fahrenhayt;
}
double SýcaklýkDönüþtürücü::SantigratHesapla()
{
	santigrat = (fahrenhayt-32)*5/9;
	return santigrat;
}