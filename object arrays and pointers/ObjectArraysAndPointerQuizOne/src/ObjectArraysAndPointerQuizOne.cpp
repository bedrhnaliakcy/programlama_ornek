//bu program da 2 farklý araba markalarýnýn bazý modellerinin önceden tanýmlý bilgileri ile nesne dizisi kullanarak ekrana çýktý vereceðiz.
#include <iostream>
#include <string>
using namespace std;
class vehicle{
private:
	int speed,price,number;// hýz, para, model ve plaka bilgileri için deðiþken tanýmlamasý.
	string model;
public:
	vehicle(int a,int b,int c,string d){//private deðiþkenleri parametre ile nesne dizilerine atama gerçeleþtireceðiz.
		speed=a;
		price=b;
		number=c;
		model=d;
	}
	void info_show(){//araç bilgilerini ekrana yazdýrmak için info_show fonksiyonunu tanýmladýk
		cout << "-----------------------\n";
		cout << "--VEHÝCLE ÝNFORMATÝON--\n";
		cout << "Speed:  " << speed << endl;
		cout << "Price:  " << price << endl;
		cout << "Number: " << number<< endl;
		cout << "Model:  " << model << endl;
		cout << "-----------------------\n";
	}
};
int main() {
	int i;
	// nesne dizilerini tanýmladýk ve içerisine deðerlerini yapýcý fonksiyonu yardýmý ile deðer atamasý yapýldý
	vehicle audi[5] ={vehicle(280,50000,1,"A9"),vehicle(250,40000,2,"A1"),vehicle(230,15000,3,"A9"),vehicle(280,50000,4,"A9"),vehicle(280,90000,5,"RS")};
	vehicle tofas[5]={vehicle(1,2,3,"slx"),vehicle(1,2,3,"dogan"),vehicle(1,2,3,"sl"),vehicle(1,2,3,"s"),vehicle(1,2,3,"sahin")};
	cout << "AUDÝ" << endl;
	for(i=0;i<5;i++){
		audi[i].info_show();//1. araba çýktýsý için
	}
	cout << endl;
	cout << "TOFAS" << endl;
	for(i=0;i<5;i++){
		tofas[i].info_show();//2. araba çýktýsý için
	}
	system("PAUSE");
	return 0;
}
