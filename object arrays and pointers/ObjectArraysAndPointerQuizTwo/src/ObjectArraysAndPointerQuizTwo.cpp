//nesne dizileri ile kullan�c�dan isim, film ad� ve ��k�� tarihini alarak nesne dizilerine atad�ktan sonra ekrana yazan program.
#include <iostream>
using namespace std;
class ornek{
public:
	string ad,soyad,film;
	int tarih;
	void bilgi_al(){
		cout << endl;
		cout << "Ad�n�z� giriiniz: ";
		cin >> ad;
		cout << "Soyad�n�z� giriiniz: ";
		cin >> soyad;
		cout << "Filmin ismini giriiniz: ";
		cin >> film;
		cout << "Filmin cikis tarihini giriniz giriiniz: ";
		cin >> tarih;
	}
	void bilgi_yaz(){
		cout << "------------\n";
		cout << "Ad:    " << ad << endl;
		cout << "Soyad: " << soyad << endl;
		cout << "Film:  " << film << endl;
		cout << "Tarih: " << tarih << endl;
	}
};
int main() {
	int i=0;
	ornek nesne[2];
	while(i<2){
		nesne[i].bilgi_al();
		i++;
	}
	i=0;
	while(i<2){
		nesne[i].bilgi_yaz();
		i++;
	}
	system("PAUSE");
	return 0;
}
// program�n amac� nesne dizilerini temel seviyede anlatmak ve anlamak
