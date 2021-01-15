#include <iostream>
using namespace std;
//yapi adında (yapılar-struct) tanımladık
struct yapi{
	int a;
	float b;
	double c;
	char *d;
};//yapının nesne ismini normalde burada da tanımlayabilirdik
int main() {

	yapi ornek={10,20,30,"bedo"};//yapı nesne ismini ve yapı içerisindeki değişkenlerin değerlerini atadık
	cout << ornek.a << " " << ornek.b << " " << ornek.c << " " << ornek.d << endl;
	system("PAUSE");
	return 0;
}
