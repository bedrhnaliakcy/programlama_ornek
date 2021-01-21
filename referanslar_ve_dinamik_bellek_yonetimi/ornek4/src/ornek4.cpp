#include <iostream>
#include <string>
using namespace std;
class cagirma{
private:
	string a;
public:
	cagirma(string x){
		a=x;
		cout << "yapici fonksiyon!!!" << endl;
	}
	~cagirma(){
		cout << "\nyikici fonksiyon" << endl;;
	}
	string erisim(){
	return a;
	}
};
void basvuruile(cagirma &nesne){
	cout << "basvuru ile parametre aktarma!!" << endl;
	cout << "girlen cumle:"<< nesne.erisim();
}
int main() {
	string cumle;
	cout << "cumle girin:";
	getline(cin,cumle);
	cagirma x(cumle);
	basvuruile(x);
	system("PAUSE");
	return 0;
}
