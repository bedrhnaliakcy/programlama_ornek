#include <iostream>
using namespace std;
class dikdortgen{
public:
	int kisa;
	int uzun;
	int alan(){
		return uzun*kisa;
	}
	int cevre(){
		return 2*(uzun+kisa);
	}
}x;
int main(){
	cout << "kisa kenari giriniz: ";
	cin >> x.kisa;
	cout << "uzun kenari giriniz: ";
	cin >> x.uzun;

	cout << "dikdörtgenin alanı: " << x.alan() << endl;
	cout << "dikdörtgenin çevresi: " << x.cevre() << endl;
	system("PAUSE");
	return 0;
}
