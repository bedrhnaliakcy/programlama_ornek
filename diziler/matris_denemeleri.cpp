#include <iostream>//temel giri� k�t�phanesi
#include <clocale>//t�rk�e karakter kullanmak i�in
#include <windows.h>//arka plan ve yaz� renkleri i�in
using namespace std;
int main(){
	setlocale(LC_ALL, "turkish");//t�rk�e karakter kullanmak i�in
	system("color a"); //yaz� rengi
	int a[3][3];
	int i,j,enb;
	/*
	i� i�e 2 for d�ng�s�nden birincisi sat�r indeks, ikincisi s�tun indeks olarak kulland�k.
	0-0
	0-1
	0-2
	... vs
	*/
	for(i=0;i<3;i++) { //sat�r ve s�tun de�erlerini kullan�c�dan alma
		for(j=0;j<3;j++) {
			cout << "\n A matrisi:\t" << i << "-" << j << ":\t" ;
			cin >> a[i][j];
        }
    }
    
    cout << "Girilen matris:" << endl; // b�t�n de�erleri ekrana yazd�rma
	for(i=0; i<3; i++)
	{
		for( j=0; j<3; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
    
    enb=a[0][0];
    for(i=0;i<3;i++) { //sat�rdaki en b�y�k de�erleri bul
		for(j=0;j<3;j++) {
		    
			if(enb<a[i][j])  enb=a[i][j];
        }
        cout<< i << ". sat�r�n en b�y�k degeri:\t "<<enb<<endl;
    }
    
    enb=a[0][0];
    for(i=0;i<3;i++) { //s�tundaki en b�y�k de�erleri bul
		for(j=0;j<3;j++) {
		    
			if(enb<a[j][i])  enb=a[j][i];
        }
        cout<< i << ". s�tun en b�y�k degeri:\t "<<enb<<endl;
    }
    /*
	bunu daha k�sa yapabilen varsa yap�p bana ats�n
	*/

	system("PAUSE");
	return 0;	
}
