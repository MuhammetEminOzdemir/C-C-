#include <iostream>
using namespace std;
int main()
{

int c;
c=5;

cout<<c<<endl; //Ekrana 5 Yazdır
cout<<c++<<endl; //Ekrana 5 Yazdır ve Sonra c’yi 1 Arttır
cout<<c<<endl<<endl; //Ekrana 6 Yazdır
c=5;
cout<<c<<endl; //Ekrana 5 Yazdır
cout<<++c<<endl; //c’yi 1 Arttır ve Ekrana 6 Yazdır **
cout<<c<<endl; //Ekrana 6 Yazdır

return 0;
}