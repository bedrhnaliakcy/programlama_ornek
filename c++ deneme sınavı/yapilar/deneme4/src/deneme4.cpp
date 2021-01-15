#include <iostream>
using namespace std;
struct yapi{
	char ad[30];
	int vize,final,sonuc;
};
yapi hesapla(yapi);
int main() {
	yapi kisi[3];
	cout << "3 kisinin adi soyadi vize ve final notlarini giriniz: (Ad: Vize Final:)\n";
	for(int x=0;x<3;x++){
		cout << "Ad: Vize: Final:\n";
		cin >> kisi[x].ad >> kisi[x].vize >> kisi[x].final;
		hesapla(kisi[x]);
	}
	system("PAUSE");
	return 0;
}
yapi hesapla(yapi kisi){
	int a=0;
	a=(kisi.vize*30/100)+(kisi.final*70/100);
	if(a>60)
		cout << kisi.ad <<"' nýn vize ve final ortalamasý:\t" << a << "\tgeçti" <<endl;
	else
		cout << kisi.ad <<"' nýn vize ve final ortalamasý:\t" << a << "\tkaldý" <<endl;
	return kisi;
}
