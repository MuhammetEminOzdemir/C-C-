//Çok boyutlu diziler
#include<iostream>
using namespace std;

int main()
{
	int toplam=0;
	int dizi[2][2]={{1,7},{4,8}};
int satir,sutun;
	for(satir=0;satir<2;satir++)
	{
		for(sutun=0;sutun<2;sutun++)
		
		cout<<"  "<<dizi[satir][sutun]<<endl;;
	}
	cout<<endl;
	return 0;
}
