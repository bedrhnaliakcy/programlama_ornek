#include <iostream>
using namespace std;
int main(){
	
	                                                                                     //kullan�c�dan al�nan verinin bellek  adresini g�steren kon 
	/*
	int a,*ptr;
	cout << "bir sayi giriniz.  " << endl;
	cin >> a;
	ptr=&a;
	cout << *ptr <<"  >>>  sayisi belekte  >>> " << ptr << " >>>  adresine yerlesti" <<endl;
	*/
	                                                                                                                            //g�sterici aritmeti�i
	/*
	int i[5]={1,2,3,4,5};
	int *ptr;
	ptr =i;
	cout << ptr << " adresteki deger: " << *ptr << endl;
	++ptr;
	cout << ptr << " adresdeki deger: " << *ptr << endl;
	*/
	                                                                                                                            //g�stericiler ve dizilerin ili�kisi
	/*
	int i[5]={1,2,3,4,5};
	int *ptr;
	ptr=i;
	for(int x=0;x<5;x++)
	cout << &ptr[x] << endl;
	*/
	
	/*
	char *ptr,isim[20];
	int i=0;
	cout << "isim girin:  ";
	gets(isim);
	ptr=isim;
	while(ptr[i]!=NULL){
		cout << ptr[i];
		i++;
	}
	cout << endl;
	
	                       // farkl� yazama teknikleri
	
	char *ptr,isim[20];
	int i=0;
	cout << "isim girin:  ";
	gets(isim);
	ptr=isim;
	while(*(ptr+i)!=NULL){
		cout << *(ptr+i);
		i++;
	}
	cout << endl;
	*/
	
	system("PAUSE");
	return 0;
}
