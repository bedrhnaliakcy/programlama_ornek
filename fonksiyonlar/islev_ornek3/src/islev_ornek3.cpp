#include <iostream>
using namespace std;
//işlevi tanımla
int asalkontrol(int);
int main() {
	int a;
	bool onay;
	cout << "bir sayi giriniz:\t";
	cin>> a;

	for(int i = 2; i <= a/2; ++i) {
	        if (asalkontrol(i)) {
	            if (asalkontrol(a - i)) {
	                cout << a << " = " << i << " + " << a-i << endl;
	                onay = true;
	            }
	        }
	    }

	if (!onay)
	      cout << a << " iki asal sayının toplamı olarak ifade edilemez.";
	return 0;
}
// asal sayı kontrol kodu. asal sayı kontrol etmek için bu kodu kullanabilirsin
int asalkontrol(int n){
	//ilk olarak doğru ataması yapıyoruz.
    bool asal=true;

    //kontrole gelen sayı 0 veya 1 eşit ise asal değildir.
    if(n==0||n==1){
	asal=false;
    }

    //gelen sayı 0 veya 1 değil ise mod 2'sini alarak kalan 0'sa yine asal değildir.
    else{
	for(int j =2;j<= n/2;++j){
		if(n%j==0){
			asal=false;
			break;
		}
	}
}
return asal;
}
