#include <iostream>
using namespace std;
class ornek{
private:
	int pay;//pay de�i�kenimiz
	int payda;// payda de�i�kenimiz
public:
	void bilgi_al(){//kullan�c�dan bilgi alma fonksiyonu
		cout << "Payi giriniz:";
		cin >> pay;
		cout <<"Paydayi giriniz:";
		cin >> payda;
	}
	void bilgi_ver(){//kullan�c�ya bilgi verme fonksiyonu
		//pay'� payda'ya b�ld�k ve araya virg�l koyduk. daha sonras�nda pay'�n mod paydas�n� ald�k.
		cout << pay/payda << "," << pay%payda << endl;
	}
};
int main() {
	ornek bolme[1];//bolme nesnemizi tan�mlad�k.
	bolme[0].bilgi_al();//fonksiyon �a�r�ld�
	bolme[0].bilgi_ver();//fonksiyon �a�r�ld�
	system("PAUSE");
	return 0;
}
