#include <iostream>
using namespace std;
void gosterici(double*);
void basvuru(double &);

int main() {
	double x=1;
	gosterici(&x);
	cout << "gosterici ile cagirmadan sonra x: " << x << endl;
	basvuru(x);
	cout << "Basvuru ile cagirmadan sonra x: " << x << endl;

	system("PAUSE");
	return 0;
}
void gosterici(double *a){
	cout << "gosterici ile cagirtma!!!" << endl;
	*a=5;
}
void basvuru(double &b){
	cout << "basvuru ile cagirtma!!!" << endl;
	b=20;
}
