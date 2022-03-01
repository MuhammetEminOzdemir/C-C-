//Sekizli Sayıyı Ondalık Sayıya Dönüştürmek için C++ Programı fonksiyon kullanarak

#include<iostream>
#include<cmath>
using namespace std;
int octalDecimal(long long );
int main()
{
    
    long long sayi;
    cout<<"octal sayiyi giriniz:";
    cin>>sayi;
    
    cout<<"octal sayinin decimal karşılığı="<<octalDecimal(sayi)<<endl;
    

    return 0;
}
int octalDecimal(long long x)
{
    int decimalSayi=0,i=0,kalan;
    while(x!=0)
    {
        kalan=x%10;
        x/=10;
        decimalSayi+= kalan*pow(8,i);
        i++;
    }
    return decimalSayi;
}