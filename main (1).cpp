/*
Aşağıdaki program özyineleme fonksiyonunu kullanarak Fibonacci serisini gösteriyor.
Özyinelemeli işlev, kendini çağıran bir işlevdir. 
Aynı fonksiyon içinde bir fonksiyonun çağrılmasını sağlar.
Fibonacci serisi kendinden önceki iki serinin toplamıdır. 
Örneğin: 1 1 2 3 5 8 13. . .

*/

#include <iostream>
using namespace std;
int fibonacci(int );
int main()
{
    
    int sayi,i=0;
    cout<<"fibonacci kac seriden olussun:";
    cin>>sayi;
    
    while(i<sayi)
        {
                cout<<" "<<fibonacci(i);
                i++;
        }
    
    return 0;
}
int fibonacci(int x)
{

       if((x==1)||(x==0))
        {
                return(x);
        }
        else
        {
                return(fibonacci(x-1)+fibonacci(x-2));
        }
        
}