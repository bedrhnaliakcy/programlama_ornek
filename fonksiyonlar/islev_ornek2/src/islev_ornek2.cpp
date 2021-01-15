#include <iostream>
using namespace std;
//işlevi tanımla
int asalkontrol(int);

int main() {
	int n;

	//kontrol edilecek sayıyı al
	    cout << "pozitif bir sayi giriniz: ";
	    cin >> n;

	//sayı kontrole gidiyor.
	    if (asalkontrol(n))
	        cout << n << " asal bir sayidir"; // doğru ise
	    else
	        cout << n << " asal bir sayi degildir."; // yanlış ise
	    return 0;

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
