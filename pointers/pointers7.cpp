#include <iostream>
using namespace std;

int fonk(int* x,int* y){
	*x=99;
	*y=100;
	cout << "islem sonrasi  "<< endl << *x << endl << *y << endl;
	
	return *x + *y;
}

int main(){
	int a,b;
	a=10;
	b=54;
	cout << "islem oncesi ilk degerleri   "<< endl << a << endl << b << endl;
	int sonuc=fonk(&a,&b);
	system("PAUSE");
	return 0;
}

