#include<iostream>
using namespace std;

int main(void)
{
	int satir, sutun;
	cout << "satir ve sutun giriniz:";
		cin >> satir >> sutun;
		for (int i = 0; i < satir; i++)
		{
			for (int j = 0; j < i; j++)
			{
				cout << "*";
			}
			cout << endl;
	}


	return 0;
}
/*Her satırla beraber i değeri artıyor ancak her satırda sadece i değeri kadar * sembolü gösteriliyor, yani 1. satırda bir tane * sembolü, 2. satırda 2 tane * sembolü şeklinde bir algoritma geliştirmemiz lazım.
Öncelikle kullanacağımız döngülere karar vermemiz lazım, satır sayısı görebileceğiniz gibi kullanıcıdan alındığı yani sonu belli bir değer olduğu için satırları oluşturmak için for döngüsü kullanmalıyız, 
diğer yandan sütunlarda ise * sembolü sayısı satır sayısına bağlı olduğu için belli bir sabit son değere sahip değildir ve karşılaştırma işlemi gerektiği için while döngüsü kullanmamız uygun olacaktır.
Dış döngüde for yapısını, iç döngüde ise while yapısını kullanmaya karar verdikten sonra artık işlemlere geçebiliriz, dışta ki for  döngüsünün değerinin sırasıyla artarak kullanıcının girdiği değere kadar 
gideceğini biliyoruz,
içte ise while döngüsünü çalıştırmak için yani * sembolünü ekrana bastırmak için bir şart kullanmamız gerekiyor, 
bu örnekte ise görebileceğiniz gibi içte ki döngünün indisi dıştaki döngünün indisinden küçük olduğu sürece ekrana * sembolünü basıyor,
yani while döngüsünün şartı bu olmalı, eğer şart sağlanıyor ise döngüye girilmeli ve indis değeri şart sağlanmayana kadar birer birer arttırılmalıdır.*/