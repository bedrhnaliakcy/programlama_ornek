#include <iostream>
using namespace std;
#define fordongu(i,j) for(i=1;i<=j;i++)
int main() {
	int a,b;
	cout << "sayi giriniz: ";
	cin >> b;
	fordongu(a,b)
	cout << a << "'nin karesi " << a*a << endl;
	system("PAUSE");
	return 0;
}
