#include <iostream>
#include <string>
using namespace std;
class isciler{
	string ad,soyad;
	int saat_ucreti,saat_calis;
	double aylik_maas;

public:
	void bilgi_gir(){
		cout << "iscinin adini gir: ";
		cin >> ad;

		cout << "iscinin soyadini gir: ";
		cin >> soyad;

		cout << "iscinin saatlik ücreti gir: ";
		cin >> saat_ucreti;

		cout << "iscinin çalişma saati gir: ";
	    cin >> saat_calis;
	}
	double maas(){
		return aylik_maas=30*(saat_ucreti*saat_calis);
	}
	void goster(){
		cout << "iscinin adi: " << ad << endl;
		cout << "iscinin soyadi: " << soyad << endl;
		cout << "iscinin maasi: " << maas() << endl;
		yorum(maas());
	}
	void yorum(double aylik_maas){
		if(aylik_maas>2800){
			cout << "maas asgari ücretin üstünde." << endl;
		}
		else {
			cout << "maas asgari ücretin altındadır." << endl;
		}
	}
}isci1,isci2;
int main() {
	isci1.bilgi_gir();
	cout << "-----------------\n";
	isci2.bilgi_gir();
	cout << "-----------------\n";
	cout << "iscilerin bilgileri\n\n";

	isci1.goster();
	cout << "-----------------\n";
	isci2.goster();

	system("PAUSE");
	return 0;
}
