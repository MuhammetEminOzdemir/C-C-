#include<iostream>
using namespace std;

bool AsalSayiMi (int);
int main()
{
   int altlimit,ustlimit;
   cout<<"Lutfen alt ve ust limiti giriniz: ";
   cin>>altlimit>>ustlimit;

   for(int i=altlimit;i<ustlimit;i++)
   if(AsalSayiMi(i))
   cout<<i<<endl;

    return 0;
}

bool AsalSayiMi (int sayi)
{
  if(sayi<2)
  return false;
  else
   {
   for(int i=2;i*i<=sayi;i++)//bir asal sayinin karekökünden dahabüyük bir böleni yoktur.
   if(sayi%i==0)
   return false;
   
  }
return true;

}