#include <iostream>
using namespace std;
int main(){
	
	int sayi=12;
	char harf='B'; 
	float sayi2=15.2;
	double sayi3=150.562;
	
	void *deger;           //her hangi bir veri t�r�ne ait olmayan g�sterici tan�mlad�k.
	
	deger=&sayi;
	cout << "sayi:  "<< *(int*)deger << endl;//parantez i�erisindeki de�erler. void t�r� olmad��� i�in ekrana yaz�lacak degerin t�r�n� tan�ml�yor.
	
	deger=&harf;
	cout << "sayi:  "<< *(char*)deger << endl;
	
	deger=&sayi2;
	cout << "sayi:  "<< *(float*)deger << endl;
	
	deger=&sayi3;
	cout << "sayi:  "<< *(double*)deger << endl;
	
	
	system("PAUSE");
	return 0;
}

