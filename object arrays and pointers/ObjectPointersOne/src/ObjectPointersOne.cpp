#include <iostream>
#include <string>//string k�t�phanesi
using namespace std;
class team{//tak�m ad�nda s�n�f�m�z
	string name,position;//futbolcular�n isim ve pozisyonu i�in de�i�ken tan�mlar�
	int number;//numaras� i�in
public:
	team(string,string,int);//yap�c� fonksiyonumuz
	void list();//ekrana ��kt� i�in
};
team::team(string i,string m,int n){//yap�c� fonksiyonumuzun g�vdesi
	name=i;
	position=m;
	number=n;
}
void team::list(){//��kt� fonksiyonun g�vdesi
	cout << name << endl;
	cout << position << endl;
	cout << number << endl;
	cout << "----\\\\----" << endl;
}
int main() {
	team tr[2]={team("ah","bilmem",15),team("haa","bilmem",24)};//tr nesnesi ve deger atamas�
	team *A=tr;//A pointers tan�m ve atamas�
	for(int i=0;i<=1;i++){//d�ng� yard�m� ile ekrana yazd�r�yoruz.
		A->list();
		A++;
}
	system("PAUSE");
	return 0;
}
