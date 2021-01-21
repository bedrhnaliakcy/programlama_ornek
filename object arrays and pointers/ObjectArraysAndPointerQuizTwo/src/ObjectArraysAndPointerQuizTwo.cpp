//nesne dizileri ile kullanýcýdan isim, film adý ve çýkýþ tarihini alarak nesne dizilerine atadýktan sonra ekrana yazan program.
#include <iostream>
using namespace std;
class ornek{
public:
	string ad,soyad,film;
	int tarih;
	void bilgi_al(){
		cout << endl;
		cout << "Adýnýzý giriiniz: ";
		cin >> ad;
		cout << "Soyadýnýzý giriiniz: ";
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
// programýn amacý nesne dizilerini temel seviyede anlatmak ve anlamak
