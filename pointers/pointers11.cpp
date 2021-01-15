#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
	cout << "5 sayi giriniz:  " << endl;
	int *p=(int*) malloc(sizeof (int)*5);
	
	for(int i=0;i<5;i++){
	cin >> p[i];
}
    for(int i=0;i<5;i++){
	cout << p[i];
}
	system("PAUSE");
	return 0;
}
