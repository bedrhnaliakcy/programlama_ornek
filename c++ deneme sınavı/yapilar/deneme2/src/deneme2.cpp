#include <iostream>
using namespace std;

struct bilgi{ //yapýmýzý tanýmladýk
	char ad[50]; // isim için
	int yas;    // yaþ için
	float maas;// maaþ için
};
bilgi veriAl(bilgi); // veriAl fonksiyonunu tanýmladýk
void yaz(bilgi);    // yazdýrmak için yaz fonksþyonumuzu tanýmladýk
int main() {
	bilgi kisi[10]; // bilgi yapýmýza kisi adlý dizi nesnesini tanýýmladýk
	for(int i=0;i<=9;i++){ // döngü ile 0'dan 9. index'e kadar bütün elemanlarý veriAl fonksiyonuna yolladýk.
		kisi[i] =veriAl(kisi[i]);//nesneler teker teker gidiyor.
	}
	cout << endl;
	for(int i=0;i<=9;i++){// veriAl fonksiyonun iþi bittikten sonra yaz fonksiyonu nesneleri tek tek yazdýrýyor.
		yaz(kisi[i]);
		}
	system("PAUSE");
	return 0;
}
bilgi veriAl(bilgi kisi){// veriAl foknsiyonu
	int a=1;
		cout << a << ". kisinin adý yasi maasi(ad: yas: maas:)\n"; //kullanýcýdan adýný yaþýný ve maaþýný alýyoruz.
		cin >> kisi.ad >> kisi.yas >> kisi.maas;// ad yas maas alýnan verilere göre atamasý yapýldý
		kisi.yas+=5;// 5 yýl sonraki yaþý için , kullanýcýnýn yaþýný 5 arttýrdýk.
		for(int x=1;x<=5;x++){//kullanýcýnýn maaþýný 5 yýl her seferinde %10 luk zam döngüsü.
		kisi.maas=(kisi.maas*10/100)+kisi.maas;
		}
	return kisi;
}
void yaz(bilgi kisi){
	cout << "\t\t\tbilgileri görüntüleme:" << endl << endl;
	cout << "Ad ve Soyad:  " << kisi.ad << "\t Yas: " << kisi.yas << "\t Maas: " << kisi.maas << endl;
}
