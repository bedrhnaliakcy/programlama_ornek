#include <iostream>
using namespace std;

int fonk(int* x,int* y){
	*x=55;
	*y=89;
	cout << *x << endl << *y << endl ;

	return *x + *y;
}

int main() {
	int sayi1,sayi2;
	sayi1=10;
	sayi2=34;
	int sonuc=fonk(&sayi1,&sayi2);
	system("PAUSE");
	return 0;
}
