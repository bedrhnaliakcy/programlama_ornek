#include <iostream>
using namespace std;
struct kisi{
	char ad[50];
	int yas,no;
};
int main() {
	struct kisi kisibilgi;
	cout << "lutfen ad�n�z� ve soyad�n�z� yaz�n�z : " << endl;
	cin.get(kisibilgi.ad,50);
	cout << "yas" << endl;
	cin >> kisibilgi.yas;
	cout << endl;
	cout <<"numara" << endl;
	cin >> kisibilgi.no;

	cout << kisibilgi.ad << endl <<kisibilgi.yas << endl << kisibilgi.no;

	system("PAUSE");
	return 0;
}
