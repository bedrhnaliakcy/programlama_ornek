#include <iostream>
using namespace std;
//yapi ad�nda (yap�lar-struct) tan�mlad�k
struct yapi{
	int a;
	float b;
	double c;
	char *d;
};//yap�n�n nesne ismini normalde burada da tan�mlayabilirdik

int main() {
	yapi ornek;//(yap�lar�n nesne isimlerini main fonksiyonu i�erisinde de tan�mlanabilir)yap� nesne ismini tan�mlad�k
	//yap� i�erisindeki de�i�kenlerin de�erlerini main fonksiyonu i�erisinde "." operat�r� ile ula��p atama yapt�k
	ornek.a=10;
	ornek.b=20;
	ornek.c=30;
	ornek.d="bedo";
	cout << ornek.a << " " << ornek.b << " " << ornek.c << " " << ornek.d << endl;
	system("PAUSE");
	return 0;
}
