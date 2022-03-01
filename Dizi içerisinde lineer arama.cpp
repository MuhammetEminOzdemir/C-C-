#include<iostream>
using namespace std;

int LineerArama(const int [],int,int);
int main()
{
	 const int DIZI_BOYUTU=100;
	 int a[DIZI_BOYUTU];
	 int arananDeger; //dizi içerisindeki aranacak tamsayi
	 int indis; //aranan deger dizinin kacinci elemani?
	 
	 for(int i=0;i<DIZI_BOYUTU;i++)
	 a[i]=2*i;
	 cout<<"aranacak sayiyi giriniz:";
	 cin>>arananDeger;
	 
	 indis=LineerArama(a,arananDeger,DIZI_BOYUTU);
	 
	 if(indis!=-1)
	       cout<<"Aranan degerin dizideki indisi: "<<indis<<endl;
	  else
	       cout<<"Aranan deger bulunamadi: "<<endl;
	
	
	return 0;
}
int LineerArama(const int dizi[],int deger,int dizininBoyutu)
{
	for(int j=0;j<dizininBoyutu;j++)
	
       if(dizi[j]==deger)
        return j;
        
          return -1;
}
