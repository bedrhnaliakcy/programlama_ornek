#include <iostream>
#include <string>
using namespace std;
class nesneden_nesneye{
	int a;
public:
	void atama_yap(int);
	int goruntule();
};
void nesneden_nesneye::atama_yap(int sayi){
	a=sayi;
}
int nesneden_nesneye::goruntule(){
	return a;
}
int main() {
	nesneden_nesneye nesne1,nesne2;
	nesne1.atama_yap(125);
	cout << "---------------------------------------" << endl;
	cout << "- nesne1'nin varsayilan degeri: " << nesne1.goruntule() << "   -"<<endl;
	cout << "- nesne2'nin varsayilan degeri: " << nesne2.goruntule() << "    -"<<endl;
	cout << "---------------------------------------" << endl;
	nesne2=nesne1;
	cout << "---------------------------------------" << endl;
	cout << "- nesne1'nin atama sonrasi degeri: " << nesne1.goruntule() << "-"<<endl;
	cout << "- nesne2'nin atama sonrasi degeri: " << nesne2.goruntule() << "-"<<endl;
	cout << "---------------------------------------" << endl;
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
