#include <iostream>
using namespace std;
//yapi adýnda (yapýlar-struct) tanýmladýk
struct yapi{
	int a;
	float b;
	double c;
	char *d;
};//yapýnýn nesne ismini normalde burada da tanýmlayabilirdik

int main() {
	yapi ornek;//(yapýlarýn nesne isimlerini main fonksiyonu içerisinde de tanýmlanabilir)yapý nesne ismini tanýmladýk
	//yapý içerisindeki deðiþkenlerin deðerlerini main fonksiyonu içerisinde "." operatörü ile ulaþýp atama yaptýk
	ornek.a=10;
	ornek.b=20;
	ornek.c=30;
	ornek.d="bedo";
	cout << ornek.a << " " << ornek.b << " " << ornek.c << " " << ornek.d << endl;
	system("PAUSE");
	return 0;
}
