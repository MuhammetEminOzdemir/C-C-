#include<iostream>
using namespace std;

int main()
{

int sayi1,sayi2,sayi3;

cout<<"Lutfen 3 sayi giriniz. \n"<<endl;
cin>>sayi1>>sayi2>>sayi3;

if((sayi1==sayi2) && (sayi2==sayi3))
cout<<"Sayilar birbirine esittir lutfen tekrar sayi giriniz "<<sayi1<<sayi2<<sayi3<<endl;

else if((sayi1>sayi2)&&(sayi2>sayi3))
cout<<"Sayi 1 buyuktur"<<sayi1<<endl;

else if((sayi2>sayi3)&&(sayi2>sayi1))
cout<<"Sayi 2 buyuktur "<<sayi2<<endl;

else 
cout<<"Sayi 3 buyuktur "<<sayi3<<endl;



    return 0;
}