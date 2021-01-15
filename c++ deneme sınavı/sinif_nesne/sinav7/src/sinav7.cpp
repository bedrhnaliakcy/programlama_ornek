#include <iostream>
using namespace std;
class ornek{
	int a,b;
	string c;
public:
	ornek();   //yapıcı foknsiyonumuzu tanımladık
	~ornek(); //yıkıcı fonksiyonmuzu tanımladık
	void goster();
}x,y,z;
ornek::ornek(){
	cout << "-----------------------------------" << endl;
	cout << "-    yapıcı fonksiyon çalıştı!!   -" << endl;
	cout << "-----------------------------------" << endl;
	cout << endl;
	a=20;
	b=3000;
	c="bedirhan";
	cout << endl;
}
ornek::~ornek(){
	cout << endl <<"-----------------------------------" << endl;
	cout << endl <<"-    yıkıcı fonksiyon çalıştı!!   -" << endl;
	cout << endl <<"-----------------------------------" << endl;
}
void ornek::goster(){
	    cout << "-----------------------------------" << endl;
		cout << "-         yas:   " << a << "               -" <<endl;
		cout << "-         para:  " << b << "             -" <<endl;
		cout << "-         ad:    " << c << "         -" <<endl;
		cout << "-----------------------------------" << endl;
	}
int main() {
	x.goster();
	y.goster();
	z.goster();
	return 0;
}
