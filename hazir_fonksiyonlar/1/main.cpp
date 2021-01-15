#include <iostream>
#include <cctype>  //C++ üstbilgi dosyasý, tek tek karakterleri sýnýflandýrmak (ve dönüþtürmek) için bir dizi iþlev bildirir. Örneðin, bir karakterin büyük harf olup olmadýðýný denetler. <cctype>isupper()
#include <cstring>
using namespace std;

int main(int argc, char** argv) {
	char x[50];
	int i;
	cout <<"bir dizi giriniz:";
	gets(x);                     // gets girilen dizileri dizinin her bir elemanýna atýyor.
	
	//küçük-büyük harf
	for(i=0;i<strlen(x);i++){
		x[i]=toupper(x[i]);     // küçük harfleri büyük harfe çeviriyor.
	}
	cout << "toupper==>  " << puts(x) <<endl;
	
	//büyük-küçük harf
	for(i=0;i<strlen(x);i++){
		x[i]=tolower(x[i]);     // büyük harfleri küçük harfe çeviriyor.
	}
	cout << "tolower==>  " << puts(x) <<endl;                   //puts dizi uzunluðunu komple ekrana yazýyor.
	
	//harf ise 0'dan farklý,yoksa 0
	for(i=0;i<strlen(x);i++){
		x[i]=isalpha(x[i]);
	}
	cout << "isalpha==>  " << puts(x) <<endl;
	
	//rakam ise 0'dan farklý,yoksa 0
	for(i=0;i<strlen(x);i++){
		x[i]=isdigit(x[i]);
	}
	cout << "isdigit==>  " << puts(x) <<endl;
	
	//rakam ya da harf ise 0'dan farklý,yoksa 0
	for(i=0;i<strlen(x);i++){
		x[i]=isalnum(x[i]);
	}
	cout << "isalnum==>  " << puts(x) <<endl;
	
	//küçük harf ise 0'dan farklý,yoksa 0
	for(i=0;i<strlen(x);i++){
		x[i]=islower(x[i]);
	}
	cout << "islower==>  " << puts(x) <<endl;
	
	//büyük harf ise 0'dan farklý,yoksa 0
	for(i=0;i<strlen(x);i++){
		x[i]=isupper(x[i]);
	}
	cout << "isupper==>  " << puts(x) <<endl;
	
	//boþluk dýþýnda yazýlabilir bir karakter ise 0'dan farklý,yoksa 0
	for(i=0;i<strlen(x);i++){
		x[i]=isgraph(x[i]);
	}
	cout << "isgraph==>  " << puts(x) <<endl;
	
	//yazýlabilir bir karakter ise 0'dan farklý,yoksa 0
	for(i=0;i<strlen(x);i++){
		x[i]=isprint(x[i]);
	}
	cout << "isprint==>  " << puts(x) <<endl;
	
	//onaltýlýk tabanda bir karkter ise 0'dan farklý,yoksa 0
	for(i=0;i<strlen(x);i++){
		x[i]=isxdigit(x[i]);
	}
	cout << "isxdigit==>  " << puts(x) <<endl;
	
	//isspace
	for(i=0;i<strlen(x);i++){
		x[i]=isspace(x[i]);
	}
	cout << "isspace==>  " << puts(x) <<endl;
	
	//cntrl
	for(i=0;i<strlen(x);i++){
		x[i]=iscntrl(x[i]);
	}
	cout << "iscntrl==>  " << puts(x) <<endl;
	system("PAUSE");
	return 0;
}
