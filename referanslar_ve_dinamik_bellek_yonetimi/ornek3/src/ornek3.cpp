#include <iostream>
#include <string>
using namespace std;
string& degistir(string &cumle){
	cumle="yeni cümle";
	return cumle;
}
int main() {
	string a="ilk cümle";
	cout << "ilk cümlenin bellekteki yeri: " << &a << endl;
	cout << degistir(a) << endl;
	cout << "yeni cümlenin bellekteki yeri: " << &degistir(a) << endl;
	system("PAUSE");
	return 0;
}
