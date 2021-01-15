#include <iostream>
using namespace std;

int usalma(int,int);

int main(){
	int a,b;
	cout << "taban ve us:\t";
	cin >> a >> b;
	cout << a << "^" << b << "=" << usalma(a,b) << endl; 
	
	system("PAUSE");
	return 0;
}
int usalma(int x, int y)
{
	int t=1;
	for(int i=1;i<=y;i++){
		t=t*x;
	}
	return t;
}
