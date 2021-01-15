#include <iostream>
#include <string>
using namespace std;
class ogrenci{
	string ad,bolum,tc;
public:
	void al(){
		cout << "ogrencinin adini gir: ";
		cin >> ad;
		cout << "bolumunu adini gir: ";
		cin >> bolum;
		cout << "T.C.'sini gir: ";
		cin >> tc;

	}
	void ver(){
		cout << "Ad    : " << ad << endl;
		cout << "T.C.  : " << tc << endl;
		cout << "Bolumu: " << bolum << endl;
	}
}ogr1,ogr2,ogr3;
int main() {
	ogr1.al();
	cout << "---------" << endl;

	ogr2.al();
	cout << "---------" << endl;

	ogr3.al();
	cout << "---------" << endl;
	cout << endl;
	ogr1.ver();
	cout << endl;
	ogr2.ver();
	cout << endl;
	ogr3.ver();
	cout << endl;

	system("PAUSE");
	return 0;
}
