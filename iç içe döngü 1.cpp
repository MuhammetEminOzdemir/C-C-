#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            int rnd;
            srand(time(0));
            rnd=rand()%15;
            cout<<rnd<<"  ";
            
        }
        cout<<endl;
    }
       




    return 0;
}