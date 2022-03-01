//============================================================================
// Name        : Muhasebe.cpp
// Description : Icýce For donguleri ve goto uygulamasi: bulmaca cozumu
//============================================================================
/* Bulmaca tanimi:100 iþçi çalýþtýrdýðým bir fabrika var. Toplam çalýþma
 * sürelerine göre 3 ayrý ücret ödüyorum: Bazý iþçiler ayda 500 birim,
 * bazýlarý 100 birim ve bazýlarý 5 birim maaþ alýyor. Her kategoride en az
 * bir iþçi bulunmaktadýr.
 * Ayda 10000 birim maaþ ödemesi yapýyorum. Kaç iþçinin maaþý ayda 5 birimdir?
 */
#include <iostream>
using namespace std;

int main() {
	//Butun olasi degerleri deneyerek cozume ulasma
	int isci5, isci100, isci500;
	for(isci500 = 1; isci500 < 20; isci500++){
		for(isci100 = 1; isci100 < 98; isci100++){
			isci5 = 100 - (isci500 + isci100);
			if((500 * isci500 + 100 * isci100 + 5 * isci5) == 10000){
				goto bulundu;
			}
		}
	}
	bulundu:
		cout << "5 tl alanlarin sayisi: " << isci5 << endl;
		cout << "100 tl alanlarin sayisi: " << isci100 << endl;
		cout << "500 tl alanlarin sayisi: " << isci500 << endl;
	return 0;
}
