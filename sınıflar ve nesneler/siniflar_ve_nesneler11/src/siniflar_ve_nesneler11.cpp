#include <iostream>
using namespace std;
class deneme{
	int sayi;
public:
	friend int sayi_fonk(deneme ornek);
	deneme(){
		sayi=12;
	}
}a;
int sayi_fonk(deneme ornek){
	return a.sayi;
}
int main() {
	cout << sayi_fonk(a);

	system("PAUSE");
	return 0;
}
