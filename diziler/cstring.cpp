#include <iostream>
#include <cstring>
using namespace std;
int main(){
	
	char ad[10],soyad[20]; //ad i�in en fazla 10 karakterlik dizi ve soyad i�in 20 karakterlik dizi tan�mland�.
	// <cstring> k�t�phanesi fonksiyonlar�n�n kullan�m�.
	//a�a��daki �rneklerde " <<< gets() puts() strlen() strcpy() strcat() >>> " kullan�ld�.
	/* 
	
	
	cout << "ad       :";//kullan�c�dan ad� isteniliyor.
	gets(ad);//al�nan veri ad dizisine aktar�l�yor.
	cout<< ad << "  " << strlen(ad) << " karakter.";//ad�n�n ka� karakter oldu�u bulunup ekrana yaz�l�yor.
	
	cout << "\n soyad       :";//kullan�c�dan soyad� isteniliyor
	gets(soyad);//al�nan veri soyad dizisine aktar�l�yor.
	cout<< soyad << "  " << strlen(soyad) << " karakter."<< endl;//soyad�n�n ka� karakter oldu�u bulunup ekrana yaz�l�yor.

	strcpy(ad,soyad);//burada ise (dizi_1, dizi_2) i�erisindeki dizi_2'yi dizi_1'e at�yor.
	cout<<"kopyalama i�leminden sonra Ad:";//i�lem sonras� ad�n� s�yl�yor
	puts(ad);//art�k ad� soyad� oldu yani "ak�ay"
	cout<<"kopyalama i�leminden sonra Ad:"<< strlen(ad)<< " karakter"<< endl;//yap�lan bu i�lemden sonraki yani kopyalama i�lemi sonras� ad�n�n uzunlu�u.
	*/
	
	/*	
	
	cout<< "Ad     :";//kullan�c�ya ad�n� girilmesini istiyor.
	gets(ad);//veri al�nd� ve atand�.
	
	cout<< "Soyad  :";//kullan�c�ya soyad�n� girilmesini istiyor.
	gets(soyad);//veri al�nd� ve atand�.
	
	strcat(ad,soyad);// ad ve soyad�n� birle�tirdi
	
	cout<< "\nAd Soyad     :";//i�lem sonras� birle�tirdi
	puts(ad);// ve ekrana �yle yazd�.
	cout<< endl;
	
	*/
	
	/*
	
	char k_adi[10],k_sifre[20];                                          //kullan�c� ad� ve �ifre dizilerini tan�mlad�k.
	char id[]="ali";                                                    //kullan�c� ad�n�n do�rusu
	char sifre[]="akcay";                                              //kullan�c� �ifrenin do�rusu
	while(1){                                                         //verilerin do�ru girilmesine kadar sonsuz d�ng�
		cout << "\nkullanici adi:\t";
		gets(k_adi);                                                //kullan�c� ad� de�erini al�p dizeye kopyal�cak
		if(strcmp(id,k_adi)==0){
			cout<< "\n sifre :\t";
			gets(k_sifre);
			if (strcmp(sifre,k_sifre)==0)
			break;
			else cout<< "sifre yanlis\n";
		}
		else cout << "kullanici adi yanlis\n";
	}
	cout << "kullanici adi ve sifre dogru";
	
	cout << endl;
	
	*/
	
	system("PAUSE");
	return 0;
}
