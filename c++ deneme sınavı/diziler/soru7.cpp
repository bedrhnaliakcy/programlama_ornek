#include <iostream>
using namespace std;
int main(){
	int num1=0,num2=1,fib;
	cout << num1 << endl << num2 << endl;
	for(int i=1;i<14;i++){
		fib=num1+num2;
		cout << fib << endl;
		num1=num2;
		num2=fib;
		
	}
	system("PAUSE");
	return 0;
}
