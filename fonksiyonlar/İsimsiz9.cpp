#include <iostream>
using namespace std;

int faktoriyel(int);

int main(){
	int x;
	cout << "bir sayi girin:\t";
	cin >>x;
	cout << "girilen sayinin faktoriyeli:\t" << faktoriyel(x) << endl;
	
	system("PAUSE");
	return 0;
}
int faktoriyel(int x)
{
	int i,fak=1;
	for(i=x;i>0;i--){
		fak=fak*i;
	}
	return fak;
}
