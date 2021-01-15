#include <iostream>
#include <string>
using namespace std;
                                                           //1. sınıf
class sayilar{
public:
	int a,b,c;
	sayilar(){
		a=1,b=2,c=3;
	}
}sayi;
                                                       //2.sınıf
class insanlar{
	string ad,soyad;
	int yas;
public:
	insanlar(string x,string y,int z){
		ad=x;
		soyad=y;
		yas=z;
	}
	void goster(){
		cout << "ad: " << ad << endl;
		cout << "soyad: " << soyad << endl;
		cout << "yas: " << yas << endl;
		cout << "----------------\n" << endl;
	}
};
                                                         //3.sınıf
class zat{
	string adi,soyadi;
	int yasi;
public:
	zat(string , string, int);
	void yaz();
};
zat::zat(string a,string b,int c){
	adi=a;
	soyadi=b;
	yasi=c;
}
void zat::yaz(){
	cout << "ad: " << adi << endl;
	cout << "soyad: " << soyadi << endl;
	cout << "yas: " << yasi << endl;
	cout << "--------~~~~~~~~~~~~~~--------\n" << endl;
}
int main() {
	cout << sayi.a ;
	cout << sayi.b ;
	cout << sayi.c ;
	cout << endl;
	cout << endl;

	insanlar insan1("ali","akçay",20);
	insanlar insan2("bedirhan","akçay",19);
	insanlar insan3("samet","akçay",45);

	insan1.goster();
	insan2.goster();
	insan3.goster();


	zat zat1("ali","akçay",20);
	zat zat2("bedirhan","akçay",19);
	zat zat3("samet","akçay",45);

	zat1.yaz();
	zat2.yaz();
	zat3.yaz();

	system("PAUSE");
	return 0;
}
