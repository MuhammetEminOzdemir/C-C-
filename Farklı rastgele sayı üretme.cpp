#include <iostream> 
  #include <cstdlib> 
  #include <ctime> 
   
  using namespace std; 
   
  int main() 
  { 
  	srand((unsigned)time(NULL)); 
  	const int BOYUT=10; 
  	int rastgeleSayi; 
  	bool dongu=true; 
   
  	int  dizi [BOYUT]={0}; 
      for(int i=1;i<=BOYUT;i++) 
  	{	 
  		 
  		while(true) 
  		{	 
          
                     rastgeleSayi=rand()%10;				 
  		 
  		   if(dizi[rastgeleSayi]==0) 
  		
                   { 
  			  dizi[rastgeleSayi]=i;	 
  			 break;
  		        } 
  		} 	 
  	} 
   	 
  	cout<<"***  Dizi ***"<<endl; 
  	for(int i=0;i<BOYUT;i++) 
  	{ 
  		cout<<"dizi["<<i<<"]:"<<dizi[i]<<endl; 
  	}	 
  	 
   
  	system("pause"); 
  	return 0; 
  } 
   
   
