//İkili Sayıyı Ondalık Sayıya Dönüştürmek için C++ Programı fonksiyon kullanarak

#include<iostream>
#include<cmath>
using namespace std;
int binaryDecimal(long long );
int main()
{
    
    long long sayi;
    cout<<"Binary sayiyiy giriniz:";
    cin>>sayi;
    
    cout<<"Binary sayinin decimal karşılığı="<<binaryDecimal(sayi)<<endl;
    

    return 0;
}
int binaryDecimal(long long x)
{
    int decimalSayi=0,i=0,kalan;
    while(x!=0)
    {
        kalan=x%10;
        x/=10;
        decimalSayi+= kalan*pow(2,i);
        i++;
    }
    return decimalSayi;
}