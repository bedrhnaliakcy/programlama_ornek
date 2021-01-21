// belirli sayýda ki öðrencilerin vize ve final notlarýný nesne dizileri ile ekrana yazdýrmak
#include <iostream>
using namespace std;
class ornek{
private:
	int vize,final;
	string ad,soyad;
public:
	void bilgi_al(){
		cout << "Adý gir:          ";
		cin >> ad;
		cout << "Soyadý gir:       ";
		cin >> soyad;
		cout << "Vize notunu gir:  ";
		cin >> vize;
		cout << "Final notunu gir: ";
		cin >> final;
	}
	void bilgi_ver(){
		cout << "\n--------ÖÐRENCÝ-BÝLGÝSÝ--------\n";
		cout << "Adý:    " << ad <<endl;
		cout << "Soyadý: " << soyad <<endl;
		cout << "Vize:   " << vize <<endl;
		cout << "Final:  " << final <<endl;
		cout << "-------------------------------\n";

	}
};
int main() {
	ornek notlar[10];
	for(int i=0;i<10;i++){
		cout << "-------------------------------\n";
		cout << i+1 << ". öðrencinin\n";
		notlar[i].bilgi_al();
	}
	for(int i=0;i<10;i++){
		notlar[i].bilgi_ver();
	}
	system("PAUSE");
	return 0;
}
