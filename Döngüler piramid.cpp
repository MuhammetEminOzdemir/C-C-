#include <iostream>
using namespace std;
int main()
{
    cout << "ic ice donguler odevler" << endl;
    
    //harf piramidi oluşturulması
    char c;
    cout << "lutfen buyuk bir harf giriniz.." << endl;
    cin>>c;
    for ( int i=c-65; i<=26; i++) //ingiliz alfabesi 26 harflidir.
        {
         for (int j=c-65; j<=i; j++)
             {
    /* int j=0 iken 0 değeri bize en baştan itibaren kodları yazmamızı ifade ediyordu.
     * Şu an değeri kullanıcıdan alacağımız için c-65 olarak tanımladık. 
     * Bunun anlamı, kullanıcının girdiği değerin a'ya yani başlangıç değerine
     * olan uzaklığıdır. Ve bizden istendiği gibi kaç satır girilecek olduğunun belirlenmesidir.
     * */
               cout << (char)(j+65) ;
             }        
         for (int j=i-1;j>=0;j--)
             {
             cout << (char)(j+65) ;
             }
             cout << endl;
        }
    
    return 0;
}
