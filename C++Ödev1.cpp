#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

void KartlariOlustur(int[][15], int);       //kartlari olusturan (diziye eleman atayan) fonksiyon
bool KartlariOlusturTest(int[][15], int, int);        //kart olusturan fonksiyonun basvurdugu, olusturdugu kartlardaki sayilarin tekrar edip etmedigini test eden fonksiyon
void DiziYazdirici(int[][15], int);              //oyun basinda olusturulan kartlari ekrana yazdiran fonksiyon

void KartDagitici(int[][4], int);              //main fonksiyonunda tanimlanmis, oyuncularin hangi kartlarla eslestigini tutan tabloya elemanlari atayan(kartlari oyunculara dagitan) fonksiyon
bool KartDagiticiTest(int[][4], int);           //kartlari oyunculara dagitan fonksiyonun kartlari dagitirken 2 oyuncuya ayni karti dagitip dagitmadigini test eden fonksiyon
void OyuncuKartiYazdirici(int[][4], int[][15], int);       // kartlar dagitildiktan sonra hangi oyuncunun hangi kartlari aldigini ekrana yazdiran fonksiyon
void TombalaTorbasiOlusturucu(int[], int);                  //tombala torbasini olusturan ve yazdiran fonksiyon
void Puanlayici(int[][15], int[][4], int[], int);           //oyunu oynatan fonksiyon
void OyuncuTabloYazdirici(int[][4], int);                   //oyun sonu skor tablosunu gösteren fonksiyon




using namespace std;


int main()
{
    int oyuncuSayisi = 0;           //oyuncu sayisi :P
    int const kartSayisi = 10;          //tombala karti sayisi
    int const kartBoyutu = 15;          //tombala karti buyuklugu

    int oyuncuTablosu[5][4] = { {0},{1},{2},{3},{4} };        //oyuncularin aldigi kartlari ve puanlarini tutan tablo(ilk sutun oyuncular,2. sutun aldiklari kartlar, 3.sutun kartlarindaki pul sayisi, 4. sutun puanlari )
    int tombalaKartlari[kartSayisi][kartBoyutu] = { 0 };        //tombala kartlari
    int tombalaTorbasi[90] = { 0 };                             //tombala torbasi

    while (!(oyuncuSayisi >= 2 && oyuncuSayisi <= 5))           // oyuncu sayisini isteme asamasi
    {
        cout << "oyuncu sayisini giriniz: ";
        cin >> oyuncuSayisi;
    }

    for (int i = 1; i <= 3; i++) //3 set
    {
        cout << i << ". set****************************************************\n\n";
        KartlariOlustur(tombalaKartlari, kartBoyutu);                //tombala kartlarinin olusturumu ve yazdirimi
        DiziYazdirici(tombalaKartlari, kartSayisi);
        KartDagitici(oyuncuTablosu, oyuncuSayisi);                                                // oyunculara kartlarin dagitimi 
        OyuncuKartiYazdirici(oyuncuTablosu, tombalaKartlari, oyuncuSayisi);                        //oyuncu kartlarinin yazdirimi
        TombalaTorbasiOlusturucu(tombalaTorbasi, 90);                                               //tombala torbasini olusturan ve yazdiran fonksiyon


        Puanlayici(tombalaKartlari, oyuncuTablosu, tombalaTorbasi, oyuncuSayisi);                   //oyun asamasi
    }
    OyuncuTabloYazdirici(oyuncuTablosu, oyuncuSayisi);
    return 0;


}

void KartlariOlustur(int dizi[][15], int boyut)
{
    srand(time(0));
    for (int i = 0; i < 10; i++)//satır
    {
        while (KartlariOlusturTest(dizi,i,boyut) == false)    //kartlardaki numaraların essizligini garantilemek icin
        {
            for (int j = 0; j < 15; j++)//sütun
            {
                dizi[i][j] = rand() % 90 + 1;
            }
        }
        
    }
}

bool KartlariOlusturTest(int dizi[][15], int kartNo,int boyut) // kartların essiz karakterlerden olustugunu test eden fonksiyon
{
    for (int i = 0; i < boyut; i++) //diger sayilarla karsilastirilan sayi
    {
        for (int j = i + 1; j < boyut; j++) // diger sayilar
        {
            if (dizi[kartNo][i] == dizi[kartNo][j]) //test asamasi
            {
                return false;
            }
        }
    }
    return true;
}



void DiziYazdirici(int dizi[][15],int boyut) // 2 boyutlu dizi yazdırma
{
    for (int i = 0; i < boyut; i++)
    {
        cout << i << " numarali kart: ";
        for (int j = 0; j < 15; j++)
        {
            cout << setw(2) << dizi[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\n\n";
}


bool KartDagiticiTest(int dizi[][4], int oyuncuSayisi)
{
    for (int i = 0; i < oyuncuSayisi; i++)
    {
        for (int j = i + 1; j < oyuncuSayisi; j++)
        {
            if (dizi[i][1] == dizi[j][1])
                return false;
        }
    }
    return true;
}

void KartDagitici(int tablo[][4],int oyuncuSayisi)
{
    srand(time(0));
    while (KartDagiticiTest(tablo,oyuncuSayisi) == false)
    {
        for (int i = 0; i < oyuncuSayisi; i++)
        {
            tablo[i][1] = rand() % 10;
        }
    }
    cout << "sirasiyla oyuncu kart numaralari" << endl;

    for (int i = 0; i < oyuncuSayisi; i++)
    {
        cout << tablo[i][1] << " ";
    }
    cout << "\n\n";
}

void OyuncuKartiYazdirici( int oyuncuTablo[][4], int tombalaKartlari[][15], int oyuncuSayisi)
{
    for (int i = 0; i < oyuncuSayisi; i++)
    {
        cout << i << " numarali oyuncu karti: ";
        for (int j = 0; j < 15; j++)
        {
            cout <<setw(2)<< tombalaKartlari[oyuncuTablo[i][1]][j] << " ";
        }
        cout << endl;
    }
    cout << "\n\n";
}

void TombalaTorbasiOlusturucu(int torba[], int boyut)
{
    int j = -1, i = 0;                                  // sayac degiskenleri
    srand(time(0));
       
    for ( i = 0; i < boyut; )                           // tekrar etmeden random sayi olusturan kisim
    {
        torba[i] = rand() % 90 + 1;
        for (j = i - 1; j >= 0; j--)
        {
            if (torba[i] == torba[j])
            {
                break;
            }
        }
        if (j == -1)
            i++;
    }
        

    cout << "cekilen numaralar \n";                 //tombala kartlarini yazdiran kisim
    int counter = 0;                              // kac tane sayinin yazdirildigini sayiyor
    for (int i = 0; i < 5; i++)                  
    {
        for (int j = 0; j < boyut / 5; j++)
        {
            cout << setw(2) << torba[counter]<<" ";
            counter++;
        }
        cout << "\n";
    }
    cout << "\n\n";
}

void Puanlayici(int kartlar[][15], int tablo[][4], int torba[], int oyuncuSayisi)
{
    bool tombalaOldu = false;
    bool cinko1 = false;
    bool cinko2 = false;

    int i = 0; //torbadaki pul
    int j = 0;  //oyuncu
    int k = 0;  //kartin ustundeki sayilar

    for (i = 0; i < 90; i++)
    {
        for (j = 0; j < oyuncuSayisi; j++)
        {
            for (k = 0; k < 15; k++)
            {
                if (torba[i] == kartlar[tablo[j][1]][k])                       //kartlara -1 yazan ve tabloya pul sayisini isleyen if
                {
                    kartlar[tablo[j][1]][k] = -1;
                    tablo[j][2] += 1;
                }
                for (int c = 0; c < oyuncuSayisi; c++)                      //cinko ve tombalalari kontrol eden dongu
                {
                    if (tablo[j][2] == 5 && cinko1 == false)                    //cinko1
                    {
                        tablo[j][3] += 5;
                        cinko1 = true;
                        cout << "1. cinkoyu yapan oyuncu " << j << endl << "mevcut durum: \n";
                        OyuncuKartiYazdirici(tablo, kartlar, oyuncuSayisi);
                    }
                    if (tablo[j][2] == 10 && cinko2 == false)                   //cinko2
                    {
                        tablo[j][3] += 10;
                        cinko2 = true;
                        cout << "2. cinkoyu yapan oyuncu " << j << endl << "mevcut durum: \n";
                        OyuncuKartiYazdirici(tablo, kartlar, oyuncuSayisi);
                    }
                    if (tablo[j][2] == 15 && tombalaOldu == false)              //tombala
                    {
                        tablo[j][3] += 15;
                        tombalaOldu = true;
                        cout << "tombala yapan oyuncu " << j << endl << "mevcut durum: \n";
                        OyuncuKartiYazdirici(tablo, kartlar, oyuncuSayisi);
                        for (int i = 0; i < oyuncuSayisi; i++)      //el bitince pul sayilari ve oyuncularin elindeki kartlar sifirlaniyor
                        {
                            tablo[i][2] = 0;
                            tablo[i][1] = 0;
                        }
                        break;
                    }
                }
                if (tombalaOldu)
                    break;
            }
            if (tombalaOldu)
                break;
        }
        if (tombalaOldu)
            break;
    }

}

void OyuncuTabloYazdirici(int oyuncuTablo[][4], int oyuncuSayisi)
{
    cout << setw(20) << "oyuncu numarasi" << setw(15) << "puan\n";
    for (int i = 0; i < oyuncuSayisi; i++)
    {
        cout << setw(20) << i << setw(15) << oyuncuTablo[i][3] << endl;
    }
}