#include <iostream>
using namespace std;
inline int dortgen(int sayi1,int sayi2){
	return sayi1*sayi2;
}
int main() {
	int sayi1,sayi2;

	cout << "kisa kenar: ";
	cin >> sayi1;
	cout << "uzun kenar: ";
	cin >> sayi2;

	cout << "dikdortge'nin alani: " << dortgen(sayi1,sayi2);

	system("PAUSE");
	return 0;
}
