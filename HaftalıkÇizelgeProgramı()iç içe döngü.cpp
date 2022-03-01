#include<iostream>
using namespace std;

int main()
{
   int hafta,gun;
   gun=7;
   cout<<"Hafta sayisi giriniz: ";
   cin>>hafta;

for(int i=1;i<=hafta;i++)
{
   cout<<"Hafta "<<i<<endl;

   for(int j=1;j<=gun;j++)
   {
       cout<<j<<". gun --------"<<endl;
   }

cout<<endl;

}


    return 0;
}
