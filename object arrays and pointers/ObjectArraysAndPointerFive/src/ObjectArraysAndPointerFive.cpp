// belirli say�da ki ��rencilerin vize ve final notlar�n� nesne dizileri ile ekrana yazd�rmak
#include <iostream>
using namespace std;
class ornek{
private:
	int vize,final;
	string ad,soyad;
public:
	void bilgi_al(){
		cout << "Ad� gir:          ";
		cin >> ad;
		cout << "Soyad� gir:       ";
		cin >> soyad;
		cout << "Vize notunu gir:  ";
		cin >> vize;
		cout << "Final notunu gir: ";
		cin >> final;
	}
	void bilgi_ver(){
		cout << "\n--------��RENC�-B�LG�S�--------\n";
		cout << "Ad�:    " << ad <<endl;
		cout << "Soyad�: " << soyad <<endl;
		cout << "Vize:   " << vize <<endl;
		cout << "Final:  " << final <<endl;
		cout << "-------------------------------\n";

	}
};
int main() {
	ornek notlar[10];
	for(int i=0;i<10;i++){
		cout << "-------------------------------\n";
		cout << i+1 << ". ��rencinin\n";
		notlar[i].bilgi_al();
	}
	for(int i=0;i<10;i++){
		notlar[i].bilgi_ver();
	}
	system("PAUSE");
	return 0;
}
