#include <iostream>
using namespace std;

int main() {
	int sayi1 = 0, sayi2 = 0, buyukSayi = 0;
	cout << "Sayi 1 : ";
	cin >> sayi1;
	cout << "Sayi 2 : ";
	cin >> sayi2;

	// Ýki sayýnýn EKOK'u bulunurken EKOK en fazla yine ikisinin çarpýmý olabilir.
	for (int i = 1; i <= sayi1 * sayi2; i++) {
		if ((i % sayi1 == 0) && (i % sayi2 == 0)) {
			cout << "EKOK: " << i;
			break;
		}
	}
	system("PAUSE");
	return 0;
}
