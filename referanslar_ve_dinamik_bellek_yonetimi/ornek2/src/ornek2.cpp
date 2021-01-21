#include <iostream>
using namespace std;
void faktoriyel(int &);
int main() {
	int x;
	cout << "faktoriyeli alinacak sayiyi giriniz:";
	cin >> x;
	faktoriyel(x);
	cout << "sayinin faktoriyeli: " << x << endl;

	system("PAUSE");
	return 0;
}
void faktoriyel(int &a){
	int f=1;
	for(int i=a;i>0;i--){
		f=f*i;
		a=f;
	}
}
