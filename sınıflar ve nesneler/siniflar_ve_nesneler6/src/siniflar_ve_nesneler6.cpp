#include <iostream>
using namespace std;
class constOrnek{
public:
	mutable int sayi;

	constOrnek(){
		sayi=0;
	}
	void sayiata(int x)const{
		sayi=x;
	}
	int dondur()const{
		return sayi;
	}
};
int main() {
	const constOrnek test;
	constOrnek test2;
	test.dondur();
	test.sayiata(5);
	test2.dondur();
	test2.sayiata(6);
	cout << test.sayi << endl;
	cout << test2.sayi<< endl;

	system("PAUSE");
	return 0;
}
