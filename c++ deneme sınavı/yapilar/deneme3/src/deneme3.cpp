#include <iostream>
using namespace std;
struct toprak{
	int a=5;
	float b=5.5;
	double c=5.55;
};
int main() {
	toprak eleman;
	int x,y;
	cout << "toprak yap�s�n�n i�erisindeki elemanlar�n bellekteki kaplad��� alanlar�n toplam�\t" << sizeof eleman.a + sizeof eleman.b + sizeof eleman.c << endl;
	cout << "toprak yap�s�n�n eleman nesnesinin bellekteki kaplad��� alan\t" << sizeof eleman << endl;
	x=sizeof eleman.a + sizeof eleman.b + sizeof eleman.c;
	y=sizeof eleman;
	if(x==y)
		cout << "yap� i�erisindekiler ile nesnenin bellekteki kaplad��� alan e�it\n";
	else
		cout << "yap� i�erisindekiler ile nesnenin bellekteki kaplad��� alan e�it de�il\n";
	system("PAUSE");
	return 0;
}
