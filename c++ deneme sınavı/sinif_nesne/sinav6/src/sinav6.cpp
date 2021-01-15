#include <iostream>
using namespace std;
class ornek{
	int x,y;
	string z;
	int j,k,l,m;
public:
	ornek(int a,int b,string c){
		x=a;
		y=b;
		z=c;
	}
	ornek(int j1,int k1,int l1,int m1){
		j=j1;
		k=k1;
		l=l1;
		m=m1;
	}
	friend void goster(ornek bilgi1,ornek bilgi2);
};
void goster(ornek bilgi1,ornek bilgi2){
	cout << endl;
	cout << "1. yapici " << endl;
	cout << "yasi\t" << bilgi1.x << endl;
	cout << "maasi\t" << bilgi1.y <<  endl;
	cout << "adi\t" << bilgi1.z << endl;
	cout << endl;
	cout << "2. yapici" << endl;
	cout << "j\t" << bilgi2.j << endl;
	cout << "k\t" << bilgi2.k << endl;
	cout << "l\t" << bilgi2.l << endl;
	cout << "m\t" << bilgi2.m << endl;
}
int main() {
	ornek k1(20,3000,"ali");
	ornek k2(20,28,25,53);
	goster(k1,k2);
	return 0;
}
