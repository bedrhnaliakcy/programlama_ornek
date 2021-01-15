#include <iostream>
using namespace std;

int faktoriyel(int);

int main(){
	int sayi;
	cout << "bir sayi girin:\t";
	cin >>sayi;
	cout << "girilen sayinin faktoriyeli:\t" << faktoriyel(sayi) << endl;
	
	system("PAUSE");
	return 0;
}
int faktoriyel(int a)
{
	int x;
	if(a>1) x=a*faktoriyel(a-1);
    else x=1;
	return x;
}
