#include <iostream>
using namespace std;
void referans(int *x){
	*x=20;
	cout << "deger ile cagirilma   "<< endl ;
}
int main(){
	int a=10;
	cout << "degisgenin ilk degeri  " << a << endl;
	referans(&a);
	cout << "deger ile cagirildikten sonra  " << a << endl; 
	system("PAUSE");
	return 0;
}
