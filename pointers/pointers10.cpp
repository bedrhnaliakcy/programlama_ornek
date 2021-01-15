#include <iostream>
using namespace std;
int main(){
	//program içerisinde deði,þmesini istemediðimiz deðiþkenler const(sabit )tanýmlarýz.
	//göstericilerde  de const tanýmlayabiliriz . 3 farklý gösterici tanýmlamasý yapýlýr.
	
	// 1. içeriðin sabit olarak tanýmlanmasý 
	int x =5 ,y=10;
	const int *a=&x;
	//   >>>>>>>>>  *a = 20;  <<<<<<<<<<<      //böyle bir kullaným hatalýdýr. bu kullanýmda iþaretçinin gösterdiði deðer deðiþtirilemez.
	cout << *a << endl;
	cout <<  a << endl;
	a=&y;    // bu kullaným doðrudur.
	cout <<  a << endl;
	cout << *a << endl;
	

	// 2. tuttuðu adresin sabit olarak tanýmlanmasý.
	char karakter='a',karakter2='b';
	char *const ptr=&karakter;
	//   >>>>>>>>>   ptr=&karakter2;   <<<<<<<<<<    bu kullaným hatalýdýr 
	cout << ptr << endl;
	*ptr ='c'; // bu kullaným doðru
	cout << ptr ;
	
	
	// 3. hem göstericini hem de iþaret ettiði verinin sabit olarak tanýmlanmasý.
	float sayi1=1.0,sayi2=2.0;
	const float * const t = &sayi1;
	// *x=7;      // hata
	// x=sayi2;  // hata
	
	
	system("PAUSE");
	return 0;
}

