// program amacý
// kullanýcýdan isim ve numara alarak bunlarý karþýlaþtýrýp nesne dizileri içerisindeki elemanlar ile uyuþuyor ise ekrana yazan programý oluþturmak.
// ve nesne dizilerini öðrenmek!!
#include <iostream>
#include <cstring>
using namespace std;
class ornek{
private:
	int numara;
	string ad;
public:
	void veri_al(int a,string b){//veri_al fonksiyonu
		numara=a;
		ad=b;
	}
	void bilgi_ver(){
		cout << "------------------\n";
		cout <<"Ad:     " << ad << endl;
		cout <<"Numara: " << numara << endl;
	}
	friend void bilgi_karsilastir(int x,string y);//arkadaþ fonksiyonu tanýmý
}nesne[3];
void bilgi_karsilastir(int x,string y){//arkadaþ fonksiyonu gövdesi
	for(int i=0;i<3;i++){
		if(nesne[i].numara==x && nesne[i].ad==y){
			cout << "Girilen " << y << " ve "<< x << " degerleri " << i+1 << ". nesne degeri " << nesne[i].ad << " ve " << nesne[i].numara <<  " a esit\n";
			break;
		}
		else{
			cout << "Girilen " << y << " ve "<< x << " degerleri " << i+1 << ". nesne degeri " << nesne[i].ad << " ve " << nesne[i].numara <<  " a esit degil\n";
		}
	}
}
int main() {
	int x;
	string y;

	nesne[0].veri_al(10, "ali");
	nesne[1].veri_al(100, "bedo");
	nesne[2].veri_al(1000, "akcay");

	cout <<"adi gir:      \t";
	cin >> y;
	cout << "numarayi gir:\t";
	cin >> x;
	bilgi_karsilastir(x,y);
	system("PAUSE");
	return 0;
}
