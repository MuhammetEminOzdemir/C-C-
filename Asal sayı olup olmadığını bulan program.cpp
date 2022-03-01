#include<iostream>
#include<math.h>
using namespace std;

int main()
{
   int sayi,asal=1,factor;
   cout<<"Lutfen sayiyi giriniz: ";
   cin>>sayi;

for(int i=2;i<sayi/2;i++)
{
// burada sayiyi tam bölüp bölmediğine bakacağız
factor=1; //asal çarpan mı diye kontrol edilir.
if(sayi%i==0)//burada sayiyi tam bölüyor ysni asal değildir sadece kendisine bölünmesi gerekir

{
  for(int k=2;k<!i/2;k++)
  {
      if(i%k==0)
      factor =0;
  }
if(factor==1) //asal çarpansa
cout<<"Asal carpandir "<<i<<endl;
/*asal=0;*/

}

}

if(asal==1)
cout<<"Asal sayidir "<<endl;
else //asal==0 olmad durumu yani asal olmama durumudur
cout<<"Asal sayi degildir "<<endl;
    
    return 0;
}