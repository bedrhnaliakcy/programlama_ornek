#include <iostream>
#include <string>
using namespace std;
string& degistir(string &cumle){
	cumle="yeni c�mle";
	return cumle;
}
int main() {
	string a="ilk c�mle";
	cout << "ilk c�mlenin bellekteki yeri: " << &a << endl;
	cout << degistir(a) << endl;
	cout << "yeni c�mlenin bellekteki yeri: " << &degistir(a) << endl;
	system("PAUSE");
	return 0;
}
