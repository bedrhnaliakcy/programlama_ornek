#include <iostream>
using namespace std;
class ornek{
	string ad,soyad;
	int yas;
public:
	void atama_yap(string,string,int);
	void goruntule();
};
void ornek::atama_yap(string a,string b,int c){
	ad=a;
	soyad=b;
	yas=c;
}
void ornek::goruntule(){
	cout << ad << endl;
	cout << soyad << endl;
	cout << yas << endl;
}
int main() {
	ornek n1,n2;
	n1.atama_yap("bedirhan","ali",20);
	n2=n1;
	cout << "---------nesne 1'nin degerleri---------" << endl;
	n1.goruntule();
	cout << endl;
	cout << "---------nesne 2'nin degerleri---------" << endl;
	n2.goruntule();
	cout << "atama islemi başarılı oldu" << endl;
	cout << endl;
	system("PAUSE");
	return 0;
}
