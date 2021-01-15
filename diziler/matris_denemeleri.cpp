#include <iostream>//temel giriþ kütüphanesi
#include <clocale>//türkçe karakter kullanmak için
#include <windows.h>//arka plan ve yazý renkleri için
using namespace std;
int main(){
	setlocale(LC_ALL, "turkish");//türkçe karakter kullanmak için
	system("color a"); //yazý rengi
	int a[3][3];
	int i,j,enb;
	/*
	iç içe 2 for döngüsünden birincisi satýr indeks, ikincisi sütun indeks olarak kullandýk.
	0-0
	0-1
	0-2
	... vs
	*/
	for(i=0;i<3;i++) { //satýr ve sütun deðerlerini kullanýcýdan alma
		for(j=0;j<3;j++) {
			cout << "\n A matrisi:\t" << i << "-" << j << ":\t" ;
			cin >> a[i][j];
        }
    }
    
    cout << "Girilen matris:" << endl; // bütün deðerleri ekrana yazdýrma
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
    for(i=0;i<3;i++) { //satýrdaki en büyük deðerleri bul
		for(j=0;j<3;j++) {
		    
			if(enb<a[i][j])  enb=a[i][j];
        }
        cout<< i << ". satýrýn en büyük degeri:\t "<<enb<<endl;
    }
    
    enb=a[0][0];
    for(i=0;i<3;i++) { //sütundaki en büyük deðerleri bul
		for(j=0;j<3;j++) {
		    
			if(enb<a[j][i])  enb=a[j][i];
        }
        cout<< i << ". sütun en büyük degeri:\t "<<enb<<endl;
    }
    /*
	bunu daha kýsa yapabilen varsa yapýp bana atsýn
	*/

	system("PAUSE");
	return 0;	
}
