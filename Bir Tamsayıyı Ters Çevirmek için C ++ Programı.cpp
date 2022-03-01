#include <iostream>
using namespace std;

int main() 
{
    int n, reversedNumber = 0, remainder;

    cout << "Lutefen bir sayi giriniz: ";
    cin >> n;

    while(n != 0) 
    {
        remainder = n%10;
        reversedNumber = reversedNumber*10 + remainder;
        n /= 10;
    }

    cout << "Reversed Number = " << reversedNumber;

    return 0;
}