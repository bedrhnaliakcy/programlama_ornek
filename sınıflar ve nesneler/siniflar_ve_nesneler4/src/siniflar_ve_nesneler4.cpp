#include <iostream>
#include <cstring>
using namespace std;
class personel{
	string personel_adi,personel_soyadi;
	int personel_yasi;
public:
	void arsiv(string padi,string psoyadi,int pyasi){
		personel_adi=padi;
		personel_soyadi=psoyadi;
		personel_yasi=pyasi;
	}
	void goruntule(){
		cout << "personel adi:    " << personel_adi << endl;
		cout << "personel soyadi: " << personel_soyadi << endl;
		cout << "personel yasi:   " << personel_yasi << endl;
	}
};
int main() {
	personel pers1,pers2,pers3;

	pers1.arsiv("bedirhan","b",20);
	pers2.arsiv("ali","a",20);
	pers3.arsiv("akçay","a",20);

	pers1.goruntule();
	pers2.goruntule();
	pers3.goruntule();

	system("PAUSE");
	return 0;
}
