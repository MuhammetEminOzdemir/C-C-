#include<iostream>
#include<iomanip> //setw için gerekli kütüphane
using namespace std;

int main()
{
   int n[10];  //içerisinde 10 adet tam sayı saklayan bir dizi tanımladık

   //bu diziye döngü yarımıyla deer atayalım

   for(int i=0;i<10;i++)
   n[i]=0; // burada ise diziye direk elemanlara 0 atadık
//cin>>n[i];  //burada cin ile kullanıcıdan edğerleri biz alırız
 cout<<" Eleman "<<setw(13)<<" deger "<<endl;  //setw boşluk için 13 kadar boşluk bırak
  
  
  for(int j=0;j<10;j++)
cout<<setw(6)<<j<<setw(13)<<n[j]<<endl;






    return 0;
}