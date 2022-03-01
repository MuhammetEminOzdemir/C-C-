#include<iostream>
using namespace std;

int KaresiniAl(int); //Fonsiyon protitipi 

int main()
{

   for(int i=1;i<=10;i++)
   
       cout<<KaresiniAl(i)<<" ";
   cout<<endl;


    return 0;
}

//Fonksiyon Tanımı
int KaresiniAl(int y)
{
  return y*y;
}

//Fonksiyon isimleri paskal notasyonuna göre isimlendirilir 
//Kelimelerin ilk harfleri büyük harfle yazılması daha iyi olur