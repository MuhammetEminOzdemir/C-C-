#include <iostream>
using namespace std;
int main()
{
    cout << "Donguler" << endl;
    
    /*4 kolon şeklkinde bastırma çalışması
     * 1.	Kolonda 1’den 100’e kadar olan 15’in katları
       2.	Kolonda 1’den 30’a kadar olan 5’in katları
       3.	Kolonda 100’den 50’ye kadar olan 10’un katları
       4.	Kolonda 2’den 64’e kadar olan 2’nin üsleri
        */
        

     int a=15; // 1'den 100'e kadar ilk 15'in katı 15 olduğu için
     int b=5;  // 1'den 30'a kadar ilk 5'in katı 5 olduğu için
     int c=100; // 100'den 50'ye kadar ilk 10'un katı 100 olduğu için
     int d=2;  // 2'den 64'e kadar ilk 2'nin katı 2 olduğu için
    
    while (a<100) //bir tanesi ile kontrol etmemiz yeterlidir.
        {
        cout << a << "\t" << b << "\t" << c << "\t" << d << endl;
        
        // " \t " kodu aralarında 3-4 satırlık boşluk bırakmak içindir.
        
        a += 15;
        b += 5;
        c -= 10;
        d *= 2;

        }

    int us=2;
    
    for (int a=1; a <= 6; a++) 
        {
        
        cout << a*15 << "\t" << a*5 << "\t" <<  100-((a-1)*10) << "\t" << us << endl;
        us *= 2;
        
        }
    
    return 0;
}