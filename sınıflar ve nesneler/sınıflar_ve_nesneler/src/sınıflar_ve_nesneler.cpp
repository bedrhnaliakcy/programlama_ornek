#include <iostream>
using namespace std;
class ogrenci{
private:
	char ad[20];
	char soyad[20];
	int yas;
	int nu;
	int ort;
public:
	void ogranciGir(){
		cout << "ogrencinin adi: ";
		cin >> ad;
		cout << "ogrencinin soyadi: ";
		cin >> soyad;
		cout << "ogrencinin yasi: ";
		cin >> yas;
		cout << "ogrencinin numarasi: ";
		cin >> nu;
		cout << "ogrencinin notu: ";
		cin >> ort;
		cout << endl;
	}
	void ogranciYaz(){
		cout << endl;
		cout << "ogrencinin adı: " << ad << endl;
		cout << "ogrencinin soyadı: " << soyad<< endl;
		cout << "ogrencinin yası: " << yas<< endl;
		cout << "ogrencinin numarası: " << nu<< endl;
		cout << "ogrencinin notu: " << ort << endl;
	}
	bool ogrenciOrt(){
		if(ort<50){
			cout << "öğrenci ders'den kaldı";
			return false;
		}
		else if(ort==50){
			cout << "öğrenci dersi sınırda geçti";
			return true;
		}
		return true;
	}
};
int main() {
	ogrenci k1;
	k1.ogranciGir();
	k1.ogranciYaz();
	k1.ogrenciOrt();
	system("PAUSE");
	return 0;
}
