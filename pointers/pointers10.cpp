#include <iostream>
using namespace std;
int main(){
	//program i�erisinde de�i,�mesini istemedi�imiz de�i�kenler const(sabit )tan�mlar�z.
	//g�stericilerde  de const tan�mlayabiliriz . 3 farkl� g�sterici tan�mlamas� yap�l�r.
	
	// 1. i�eri�in sabit olarak tan�mlanmas� 
	int x =5 ,y=10;
	const int *a=&x;
	//   >>>>>>>>>  *a = 20;  <<<<<<<<<<<      //b�yle bir kullan�m hatal�d�r. bu kullan�mda i�aret�inin g�sterdi�i de�er de�i�tirilemez.
	cout << *a << endl;
	cout <<  a << endl;
	a=&y;    // bu kullan�m do�rudur.
	cout <<  a << endl;
	cout << *a << endl;
	

	// 2. tuttu�u adresin sabit olarak tan�mlanmas�.
	char karakter='a',karakter2='b';
	char *const ptr=&karakter;
	//   >>>>>>>>>   ptr=&karakter2;   <<<<<<<<<<    bu kullan�m hatal�d�r 
	cout << ptr << endl;
	*ptr ='c'; // bu kullan�m do�ru
	cout << ptr ;
	
	
	// 3. hem g�stericini hem de i�aret etti�i verinin sabit olarak tan�mlanmas�.
	float sayi1=1.0,sayi2=2.0;
	const float * const t = &sayi1;
	// *x=7;      // hata
	// x=sayi2;  // hata
	
	
	system("PAUSE");
	return 0;
}

