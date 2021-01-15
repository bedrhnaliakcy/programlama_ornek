#include <iostream>
using namespace std;

int topla(){
	
	int x,y;
	cout << "2 sayi giriniz:\t" << endl;
	cin >>x>>y;
	return x+y;
}

int main(){
	cout << "sayilarin toplamlari:\t "<< topla() << endl;
	
	system("PAUSE");
	return 0;
}

