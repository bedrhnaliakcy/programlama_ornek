#include <iostream>
using namespace std;
class ornek{
private:
	int pay;//pay deðiþkenimiz
	int payda;// payda deðiþkenimiz
public:
	void bilgi_al(){//kullanýcýdan bilgi alma fonksiyonu
		cout << "Payi giriniz:";
		cin >> pay;
		cout <<"Paydayi giriniz:";
		cin >> payda;
	}
	void bilgi_ver(){//kullanýcýya bilgi verme fonksiyonu
		//pay'ý payda'ya böldük ve araya virgül koyduk. daha sonrasýnda pay'ýn mod paydasýný aldýk.
		cout << pay/payda << "," << pay%payda << endl;
	}
};
int main() {
	ornek bolme[1];//bolme nesnemizi tanýmladýk.
	bolme[0].bilgi_al();//fonksiyon çaðrýldý
	bolme[0].bilgi_ver();//fonksiyon çaðrýldý
	system("PAUSE");
	return 0;
}
