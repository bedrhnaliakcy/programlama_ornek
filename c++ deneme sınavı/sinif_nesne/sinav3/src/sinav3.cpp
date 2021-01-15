#include <iostream>
using namespace std;
class dortgen{
	int kisa;
	int uzun;
public:
	void bilgi_al(){
		cout << "dikdortgenin kisa kenarini giriniz: ";
		cin >> kisa;
		cout << "dikdortgenin uzun kenarini giriniz: ";
		cin >> uzun;
	}
	friend void bilgi_ver(dortgen bilgi);
}d;
void bilgi_ver(dortgen bilgi){
	cout << "dortgenin alani: " << bilgi.kisa*bilgi.uzun << endl;
	cout << "dortgenin cevresi: " << (bilgi.kisa*2)+(bilgi.uzun*2) << endl;
}
int main() {
	d.bilgi_al();
	bilgi_ver(d);
	system("PAUSE");
	return 0;
}
