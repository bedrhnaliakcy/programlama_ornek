#include <iostream>
using namespace std;
//yapi ad�nda (yap�lar-struct) tan�mlad�k
struct yapi{
	int a;
	float b;
	double c;
	char *d;
}ornek={10,20,30,"bedo"};//direk yap� olu�tururken nesne ile tan�mlama yapt�k
int main() {
	cout << ornek.a << " " << ornek.b << " " << ornek.c << " " << ornek.d << endl;
	system("PAUSE");
	return 0;
}
