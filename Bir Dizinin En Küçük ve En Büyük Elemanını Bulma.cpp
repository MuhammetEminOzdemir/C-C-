#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

void KucuguBuyuguBul(const int [],int ,int&,int&);
int main()
{
	srand(time(0));
	const int DIZI_BOYUTU=10;
	int a[DIZI_BOYUTU];
	int enkucuk,enbuyuk;
	
	cout<<"Dizinin elemanlari: "<<endl;
	for(int i=0;i<DIZI_BOYUTU;i++)
	{
		a[i]=rand()%6+1;
		cout<<a[i]<<" "<<endl;
	}
	KucuguBuyuguBul(a,DIZI_BOYUTU,enkucuk,enbuyuk);
	cout<<"Dizinin en kucuk elemani: "<<enkucuk<<endl;
	cout<<"Dizinin en buyuk elemani: "<<enbuyuk<<endl;

	return 0;
}
void KucuguBuyuguBul(const int b[],int dizininBoyutu,int &min,int &max)
{
	min=b[0];
	max=b[0];
	
	for(int i=1;i<dizininBoyutu;i++)
	
    {
	  if(b[i]<min)
              min=b[i];
           else 
         max=b[i];
}
	
}
