#include <iostream>
using namespace std;

struct bilgi{ //yap�m�z� tan�mlad�k
	char ad[50]; // isim i�in
	int yas;    // ya� i�in
	float maas;// maa� i�in
};
bilgi veriAl(bilgi); // veriAl fonksiyonunu tan�mlad�k
void yaz(bilgi);    // yazd�rmak i�in yaz fonks�yonumuzu tan�mlad�k
int main() {
	bilgi kisi[10]; // bilgi yap�m�za kisi adl� dizi nesnesini tan��mlad�k
	for(int i=0;i<=9;i++){ // d�ng� ile 0'dan 9. index'e kadar b�t�n elemanlar� veriAl fonksiyonuna yollad�k.
		kisi[i] =veriAl(kisi[i]);//nesneler teker teker gidiyor.
	}
	cout << endl;
	for(int i=0;i<=9;i++){// veriAl fonksiyonun i�i bittikten sonra yaz fonksiyonu nesneleri tek tek yazd�r�yor.
		yaz(kisi[i]);
		}
	system("PAUSE");
	return 0;
}
bilgi veriAl(bilgi kisi){// veriAl foknsiyonu
	int a=1;
		cout << a << ". kisinin ad� yasi maasi(ad: yas: maas:)\n"; //kullan�c�dan ad�n� ya��n� ve maa��n� al�yoruz.
		cin >> kisi.ad >> kisi.yas >> kisi.maas;// ad yas maas al�nan verilere g�re atamas� yap�ld�
		kisi.yas+=5;// 5 y�l sonraki ya�� i�in , kullan�c�n�n ya��n� 5 artt�rd�k.
		for(int x=1;x<=5;x++){//kullan�c�n�n maa��n� 5 y�l her seferinde %10 luk zam d�ng�s�.
		kisi.maas=(kisi.maas*10/100)+kisi.maas;
		}
	return kisi;
}
void yaz(bilgi kisi){
	cout << "\t\t\tbilgileri g�r�nt�leme:" << endl << endl;
	cout << "Ad ve Soyad:  " << kisi.ad << "\t Yas: " << kisi.yas << "\t Maas: " << kisi.maas << endl;
}
