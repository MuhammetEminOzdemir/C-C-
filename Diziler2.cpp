/*Bir dizi hem deklare edilebilir ve hem de aynı
anda ilk değer atama listesi (initializer list)
yardımıyla dizi elemanlarına ilk değerleri
atanabilir.

lDizi elemanları parantezler içerisine ({ }) yazılan
ilk değer atama listesindeki değerlerle atanırlar
ve bu elemanlar birbirlerinden virgül ile ayrılırlar.

Örnek:

int n[]={10, 20, 30, 40, 50};
• Dizinin boyutu bu tanımda yazılmadığı için derleyici bu dizinin
boyutunu ilk değer atama listesinin eleman sayısını temel alarak
belirler.

• Yukarıdaki deyim 5 elemanlı bir int dizi tanımlar.
• Dizi elemanlarının indis değerleri sırasıyla: 0, 1, 2, 3, 4
• Dizi elemanlarının ilk değerleri sırasıyla: 10, 20, 30, 40, 50*/

//İlk Değer Atama Listesi ile Dizi Oluşturma

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
  int n[]={10,20,30,40,50};

 cout<<"Dizinin elemanlari= ";
 for(int i=0;i<5;i++)
 cout<<" "<<n[i];


    return 0;
}