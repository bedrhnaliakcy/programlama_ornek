#include <iostream>
using namespace std;
// işlevi tanımla
int asalkontrol(int);

int main() {
	int a,b;
	bool onay;

	// kullanıcıdan iki sayı alıyoruz
	cout << "pozitif iki sayi giriniz:";
	cin >> a >> b;

	// ilk girilen sayı büyük ise yerlerini değiştiriyoruz.
	if(a>b){
		b=a+b;
		a=b-a;
		b=b-a;
	}

	// ekrana yazıyoruz
	cout << a << " ile " << b << " arasindaki asal sayilar:\t";

	// asal sayıları küçük olandan başlayıp. birer birer kontrole yolluyoruz.
	for(int i=a+1;i<b;++i){
		//kontrole gidiyor.
		onay = asalkontrol(i);

		// onay doğru(true) ise ekrana yazdır.
		if(onay)
			cout << i << endl;

		//onay yanlış(false) ise kontrole giden sayıyı bir arttır.
	}
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
