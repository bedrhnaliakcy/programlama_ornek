#include <iostream>
#include <cstring>
using namespace std;
int main(int argc, char** argv) {	
	char string1[]="Bedo  ";
	char string2[]="Baskan ali  ";
	char string3[20];
	int a=5,b=0;
	cout << strcpy(string1,string2) << endl;
	cout << strncpy(string1,string2,a) << endl;
	cout << strcat(string1,string2) << endl;
	cout << strncat(string1,string2,a) << endl;
	cout << strcmp(string1,string2) << endl;
	cout << strncmp(string1,string2,a) << endl;
	cout << strchr(string1,'a') << endl;
	cout << strstr(string1,string2) << endl;
	
	for(int i=1;i<=strlen(string1);i++){
		b++;
	}
	cout << "cumlenin uzunlugu: " << b << endl;
	cout << "\ncümlenin tersi" << endl;
	strrev(string1);
	puts(string1);
	
	strncpy(string3,string1,4);
	string3[6]='\0';
	puts(string3);
	
	system("PAUSE");
	return 0;
}
