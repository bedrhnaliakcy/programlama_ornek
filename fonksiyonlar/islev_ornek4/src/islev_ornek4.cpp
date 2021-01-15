#include <iostream>
using namespace std;
int toplam(int);
int main() {
	int a,sonuc;
	cout << "toplanmasini istediginiz ust sinir dogal sayilari giriniz.\t";
	cin >> a;

	sonuc=toplam(a);
	cout << a << " kadar olan dogal sayilarin toplami = " << sonuc;

	return 0;
}
int toplam(int n){
	if(n != 0){
		return n+toplam(n-1);
	}
		return 0;
}
