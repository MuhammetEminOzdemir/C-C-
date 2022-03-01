/*
Kabarcık sıralama basit bir sıralama algoritmasıdır. 
Öğeleri yanlış sıradaysa sıralar. 
Kabarcık sıralama, her bir bitişik öğe çiftini karşılaştırır 
ve yanlış sıradaysa bunları değiştirir. Aşağıdaki program, 
sayıları artan düzende sıralamak için kabarcık sıralama algoritması uyguluyor.

*/

#include<iostream>
using namespace std;
int sum (int a);

int main()
{
    int num, result;

    cout<<"\n Enter Numbers : ";
    cin>>num;
    result = sum(num);
    cout<<"\n Sum of Digits : "<<result;
    return 0;
}
int sum (int num)
{
    if (num != 0)
    {
        return (num % 10 + sum (num / 10));
    }
    else
    {
       return 0;
    }
}