#include <iostream>
using namespace std;
int faktoriyeli(int);
int main() {
	int a,sonuc=0;

	cout << "faktoriyeli aliinacak sayi" << '\n';
	cin >> a;
	sonuc=faktoriyeli(a);
	cout << a <<  " 'nin faktoriyeli = " << sonuc << endl;
	
	return 0;
}
int faktoriyeli(int n){
	if (n>1) {
		return n*faktoriyeli(n-1);
	}
	return 1;
}
