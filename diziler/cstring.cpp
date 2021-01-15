#include <iostream>
#include <cstring>
using namespace std;
int main(){
	
	char ad[10],soyad[20]; //ad için en fazla 10 karakterlik dizi ve soyad için 20 karakterlik dizi tanýmlandý.
	// <cstring> kütüphanesi fonksiyonlarýnýn kullanýmý.
	//aþaðýdaki örneklerde " <<< gets() puts() strlen() strcpy() strcat() >>> " kullanýldý.
	/* 
	
	
	cout << "ad       :";//kullanýcýdan adý isteniliyor.
	gets(ad);//alýnan veri ad dizisine aktarýlýyor.
	cout<< ad << "  " << strlen(ad) << " karakter.";//adýnýn kaç karakter olduðu bulunup ekrana yazýlýyor.
	
	cout << "\n soyad       :";//kullanýcýdan soyadý isteniliyor
	gets(soyad);//alýnan veri soyad dizisine aktarýlýyor.
	cout<< soyad << "  " << strlen(soyad) << " karakter."<< endl;//soyadýnýn kaç karakter olduðu bulunup ekrana yazýlýyor.

	strcpy(ad,soyad);//burada ise (dizi_1, dizi_2) içerisindeki dizi_2'yi dizi_1'e atýyor.
	cout<<"kopyalama iþleminden sonra Ad:";//iþlem sonrasý adýný söylüyor
	puts(ad);//artýk adý soyadý oldu yani "akçay"
	cout<<"kopyalama iþleminden sonra Ad:"<< strlen(ad)<< " karakter"<< endl;//yapýlan bu iþlemden sonraki yani kopyalama iþlemi sonrasý adýnýn uzunluðu.
	*/
	
	/*	
	
	cout<< "Ad     :";//kullanýcýya adýný girilmesini istiyor.
	gets(ad);//veri alýndý ve atandý.
	
	cout<< "Soyad  :";//kullanýcýya soyadýný girilmesini istiyor.
	gets(soyad);//veri alýndý ve atandý.
	
	strcat(ad,soyad);// ad ve soyadýný birleþtirdi
	
	cout<< "\nAd Soyad     :";//iþlem sonrasý birleþtirdi
	puts(ad);// ve ekrana öyle yazdý.
	cout<< endl;
	
	*/
	
	/*
	
	char k_adi[10],k_sifre[20];                                          //kullanýcý adý ve þifre dizilerini tanýmladýk.
	char id[]="ali";                                                    //kullanýcý adýnýn doðrusu
	char sifre[]="akcay";                                              //kullanýcý þifrenin doðrusu
	while(1){                                                         //verilerin doðru girilmesine kadar sonsuz döngü
		cout << "\nkullanici adi:\t";
		gets(k_adi);                                                //kullanýcý adý deðerini alýp dizeye kopyalýcak
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
