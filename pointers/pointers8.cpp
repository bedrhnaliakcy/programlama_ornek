#include <iostream>
using namespace std;
double kare(double x){
	x*=x;
	
	return x;
}

int main(){
	double kenar;
	double (*fonk)(double);
	fonk=kare;
	cout << "karenin bir kenarini giriniz: ";
	cin >> kenar;
	
	cout << "karenin alani  " << fonk(kenar) << endl;
	
	
	system("PAUSE");
	return 0;
}

