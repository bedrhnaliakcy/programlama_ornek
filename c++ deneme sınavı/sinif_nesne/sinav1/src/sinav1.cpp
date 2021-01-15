#include <iostream>
using namespace std;
class zaman{
	int saat;
	int dakika;
	int saniye;
public:
	void gir(int s,int d,int sn){
		saat=s;
		dakika=d;
		saniye=sn;
	}
	void yaz(){
		cout << "zaman==> " << saat << ":" << dakika << ":" << saniye << endl;
	}
}zm;
int main() {
	int s,d,sn;
	cout << "saat : dakika : saniye sirasiyla giriniz: " ;
	cin >> s >> d >> sn;

	zm.gir(s, d, sn);
	zm.yaz();

	system("PAUSE");
	return 0;
}
