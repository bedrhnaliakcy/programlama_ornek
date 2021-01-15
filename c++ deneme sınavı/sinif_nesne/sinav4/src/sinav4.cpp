#include <iostream>
#include <string>
using namespace std;
class ornek{
	string ad,soyad;
	int yas;
public:
	ornek(){
		ad="ali";
		soyad="akçay";
		yas=20;
	}
	void bilgi_ver(){
		cout << "kullanici adi:    " << ad << endl;
		cout << "kullanici soyadi: " << soyad<< endl;
		cout << "kullanici yasi:   " << yas << endl;
	}
}n;
int main() {
	n.bilgi_ver();
	return 0;
}
