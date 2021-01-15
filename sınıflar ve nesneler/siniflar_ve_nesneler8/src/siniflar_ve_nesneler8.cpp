#include <iostream>
using namespace std;
class yikici{
	int a;
public:
	yikici();
	~yikici();
	void goruntule();
}x;
yikici::yikici(){
	cout << "yapici fonksiyon calisti.\n";
	a=5;
}
yikici::~yikici(){
	cout << "gorev bitti yok edilioyr\n";
}
void yikici::goruntule(){
	cout << "a degeri: " << a << endl;
}
int main() {
	x.goruntule();
	system("PAUSE");
	return 0;
}
