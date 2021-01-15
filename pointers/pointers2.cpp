#include <iostream>
using namespace std;
int main(){
	
	                                                                                     //kullanýcýdan alýnan verinin bellek  adresini gösteren kon 
	/*
	int a,*ptr;
	cout << "bir sayi giriniz.  " << endl;
	cin >> a;
	ptr=&a;
	cout << *ptr <<"  >>>  sayisi belekte  >>> " << ptr << " >>>  adresine yerlesti" <<endl;
	*/
	                                                                                                                            //gösterici aritmetiði
	/*
	int i[5]={1,2,3,4,5};
	int *ptr;
	ptr =i;
	cout << ptr << " adresteki deger: " << *ptr << endl;
	++ptr;
	cout << ptr << " adresdeki deger: " << *ptr << endl;
	*/
	                                                                                                                            //göstericiler ve dizilerin iliþkisi
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
	
	                       // farklý yazama teknikleri
	
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
