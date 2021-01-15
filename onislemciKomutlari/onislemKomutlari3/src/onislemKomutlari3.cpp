#include <iostream>
#include <math.h>
#define deltabul(a,b,c) b*b -4*a*c
#define kup(k) k*k*k

using namespace std;
int main() {
	int x,y,z;
	cout << "3 adet sayi giriniz: ";
	cin >> x >> y >> z;
	cout << endl;
	cout << "girilen 3 sayi ile delta bulma:==> " << deltabul(x,y,z);
	cout << endl;
	for(int i=1;i<=x;i++){
		cout << i <<"'nin küpü " << kup(i);
		cout << endl;
	}
	system("PAUSE");
	return 0;
}
