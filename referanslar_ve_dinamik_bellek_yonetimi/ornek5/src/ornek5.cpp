#include <iostream>
using namespace std;
class test{
	string a;
public:
	test(string x){
		cout << x << endl;
		a=x;
	}
	string& degistir(test &y){
		y.a="yeni cumle";
		return y.a;
	}
};
int main() {
	test nesne("ilk cumle");
	cout << nesne.degistir(nesne);

	system("PAUSE");
	return 0;
}
