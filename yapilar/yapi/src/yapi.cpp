#include <iostream>
using namespace std;
//yapi ad�nda (yap�lar-struct) tan�mlad�k
struct yapi{
	int a;
	float b;
	double c;
	char *d;
}ornek;//yap�n�n nesne ismini tan�mlad�k
int main() {
	// yap� i�erisindeki de�i�kenlerin de�erlerini atad�k.

	ornek.a=10;
	ornek.b=20;
	ornek.c=30;
	ornek.d="bedo";

	cout << ornek.a << " " << ornek.b << " " << ornek.c << " " << ornek.d << endl;
	system("PAUSE");
	return 0;
}
