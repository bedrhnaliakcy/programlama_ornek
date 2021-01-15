#include <iostream>
#include <cctype>  //C++ �stbilgi dosyas�, tek tek karakterleri s�n�fland�rmak (ve d�n��t�rmek) i�in bir dizi i�lev bildirir. �rne�in, bir karakterin b�y�k harf olup olmad���n� denetler. <cctype>isupper()
#include <cstring>
using namespace std;

int main(int argc, char** argv) {
	char x[50];
	int i;
	cout <<"bir dizi giriniz:";
	gets(x);                     // gets girilen dizileri dizinin her bir eleman�na at�yor.
	
	//k���k-b�y�k harf
	for(i=0;i<strlen(x);i++){
		x[i]=toupper(x[i]);     // k���k harfleri b�y�k harfe �eviriyor.
	}
	cout << "toupper==>  " << puts(x) <<endl;
	
	//b�y�k-k���k harf
	for(i=0;i<strlen(x);i++){
		x[i]=tolower(x[i]);     // b�y�k harfleri k���k harfe �eviriyor.
	}
	cout << "tolower==>  " << puts(x) <<endl;                   //puts dizi uzunlu�unu komple ekrana yaz�yor.
	
	//harf ise 0'dan farkl�,yoksa 0
	for(i=0;i<strlen(x);i++){
		x[i]=isalpha(x[i]);
	}
	cout << "isalpha==>  " << puts(x) <<endl;
	
	//rakam ise 0'dan farkl�,yoksa 0
	for(i=0;i<strlen(x);i++){
		x[i]=isdigit(x[i]);
	}
	cout << "isdigit==>  " << puts(x) <<endl;
	
	//rakam ya da harf ise 0'dan farkl�,yoksa 0
	for(i=0;i<strlen(x);i++){
		x[i]=isalnum(x[i]);
	}
	cout << "isalnum==>  " << puts(x) <<endl;
	
	//k���k harf ise 0'dan farkl�,yoksa 0
	for(i=0;i<strlen(x);i++){
		x[i]=islower(x[i]);
	}
	cout << "islower==>  " << puts(x) <<endl;
	
	//b�y�k harf ise 0'dan farkl�,yoksa 0
	for(i=0;i<strlen(x);i++){
		x[i]=isupper(x[i]);
	}
	cout << "isupper==>  " << puts(x) <<endl;
	
	//bo�luk d���nda yaz�labilir bir karakter ise 0'dan farkl�,yoksa 0
	for(i=0;i<strlen(x);i++){
		x[i]=isgraph(x[i]);
	}
	cout << "isgraph==>  " << puts(x) <<endl;
	
	//yaz�labilir bir karakter ise 0'dan farkl�,yoksa 0
	for(i=0;i<strlen(x);i++){
		x[i]=isprint(x[i]);
	}
	cout << "isprint==>  " << puts(x) <<endl;
	
	//onalt�l�k tabanda bir karkter ise 0'dan farkl�,yoksa 0
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
