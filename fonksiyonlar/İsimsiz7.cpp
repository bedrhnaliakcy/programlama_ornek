#include <iostream>
using namespace std;

void ekranayaz(int);

int main(){
	int i;
	cout << "bir sayi giriniz:\t";
	cin >> i;
	ekranayaz(i);

	system("PAUSE");
	return 0;
}
void ekranayaz(int x){
cout << "fonksiyona parametre olarak verilen deger:\t" << x << endl;	
}
