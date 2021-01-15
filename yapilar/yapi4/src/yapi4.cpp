#include <iostream>
using namespace std;
//yapi adında (yapılar-struct) tanımladık
struct yapi{
	int a;
	float b;
	double c;
	char *d;
}ornek={10,20,30,"bedo"};//direk yapı oluştururken nesne ile tanımlama yaptık
int main() {
	cout << ornek.a << " " << ornek.b << " " << ornek.c << " " << ornek.d << endl;
	system("PAUSE");
	return 0;
}
