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

	yapi ornek={10,20,30,"bedo"};//yap� nesne ismini ve yap� i�erisindeki de�i�kenlerin de�erlerini atad�k
	cout << ornek.a << " " << ornek.b << " " << ornek.c << " " << ornek.d << endl;
	system("PAUSE");
	return 0;
}
