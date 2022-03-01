#include<iostream>

using namespace std;

int main()
{

int sayi1,sayi2;

  cout<<"Lutfen 2 sayi giriniz\n";
cin>>sayi1>>sayi2; // kullancıdan iki sayı aldık

if(sayi1==sayi2)
cout<<"Esittir."<<endl;

else if(sayi1<sayi2)
cout<<"sayi 1 kucuktur"<<endl;

else 
cout<<"Sayi 2  kucuktur."<<endl;
    

    return 0;
}