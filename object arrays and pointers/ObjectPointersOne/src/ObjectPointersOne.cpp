#include <iostream>
#include <string>//string kütüphanesi
using namespace std;
class team{//takým adýnda sýnýfýmýz
	string name,position;//futbolcularýn isim ve pozisyonu için deðiþken tanýmlarý
	int number;//numarasý için
public:
	team(string,string,int);//yapýcý fonksiyonumuz
	void list();//ekrana çýktý için
};
team::team(string i,string m,int n){//yapýcý fonksiyonumuzun gövdesi
	name=i;
	position=m;
	number=n;
}
void team::list(){//çýktý fonksiyonun gövdesi
	cout << name << endl;
	cout << position << endl;
	cout << number << endl;
	cout << "----\\\\----" << endl;
}
int main() {
	team tr[2]={team("ah","bilmem",15),team("haa","bilmem",24)};//tr nesnesi ve deger atamasý
	team *A=tr;//A pointers taným ve atamasý
	for(int i=0;i<=1;i++){//döngü yardýmý ile ekrana yazdýrýyoruz.
		A->list();
		A++;
}
	system("PAUSE");
	return 0;
}
