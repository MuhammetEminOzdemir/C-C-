#include<iostream>
using namespace std;

int fib(int);
int main()
{
    int index;
    cout<<"Lutfen index sayisinin giriniz: ";
    cin>>index;

    cout<<index<<". indexteki fibonacci sayisi"<<" :";

int fibsayi=fib(index);

cout<<fib(index)<<endl;


    return 0;
}

int fib(int sayi)
{
  if(sayi==0)
  {
      return 0;
  }
  else if(sayi==1||sayi==2)
      {
          return 1;
      }else  
{
return (fib(sayi-1)+fib(sayi-2));
}

}