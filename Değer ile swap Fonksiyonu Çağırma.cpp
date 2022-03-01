#include<iostream>
using namespace std;

void Swap(int,int);

int main()
{
    int a,b;
    a=2;
    b=5;
    
    cout<<"Swap fonksiyonu çagrilmadan önce\n";
    cout<<"a="<<a<<"    b"<<b<<endl;
    Swap(a,b);

    cout<<"Swap fonksiyonu çagrildiktan sonra\n";
    cout<<"a="<<a<<"    b"<<b<<endl;


    return 0;
}
//Fonksiyon Tanımı

void Swap (int a,int b)
{
   int geciciDegisken=a;
   a=b;
   b=geciciDegisken;

}     // ÇALIŞMAZ  

//Bu kod çalışmaz yerleri değişmez çünkü yukarıdaki a değikeni
//asağıdaki a değişkenini aynı değişken fakat scop olayı vardır mantık hatası aynıişlem değil
//değer ile çağırma ile olmaz referan ile çağır ile olur

//Bu kod ile çalışır aşağıdaki 

// ÇALIŞIRR
 // REFERANS İLE ÇAĞIRMA

 
 /*
 
 #include<iostream>
using namespace std;

void Swap(int&,int&);   //BURADA ADRES BELİRTECİ KOYMALIYIZ 

int main()
{
    int a,b;
    a=2;
    b=5;
    
    cout<<"Swap fonksiyonu çagrilmadan önce\n";
    cout<<"a="<<a<<"    b"<<b<<endl;
    Swap(a,b);

    cout<<"Swap fonksiyonu çagrildiktan sonra\n";
    cout<<"a="<<a<<"    b"<<b<<endl;


    return 0;
}
//Fonksiyon Tanımı

void Swap (int &a,int &b)  //BURAYADA ADRES BELİRTECİ KOYMALYIZ Kİ ÇALIŞSIN
{
   int geciciDegisken=a;
   a=b;
   b=geciciDegisken;

} 

*/