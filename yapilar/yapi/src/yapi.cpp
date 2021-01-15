#include <iostream>
using namespace std;
//yapi adında (yapılar-struct) tanımladık
struct yapi{
	int a;
	float b;
	double c;
	char *d;
}ornek;//yapının nesne ismini tanımladık
int main() {
	// yapı içerisindeki değişkenlerin değerlerini atadık.

	ornek.a=10;
	ornek.b=20;
	ornek.c=30;
	ornek.d="bedo";

	cout << ornek.a << " " << ornek.b << " " << ornek.c << " " << ornek.d << endl;
	system("PAUSE");
	return 0;
}
