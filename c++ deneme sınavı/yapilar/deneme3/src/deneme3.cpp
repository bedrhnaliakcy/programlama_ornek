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
	cout << "toprak yapýsýnýn içerisindeki elemanlarýn bellekteki kapladýðý alanlarýn toplamý\t" << sizeof eleman.a + sizeof eleman.b + sizeof eleman.c << endl;
	cout << "toprak yapýsýnýn eleman nesnesinin bellekteki kapladýðý alan\t" << sizeof eleman << endl;
	x=sizeof eleman.a + sizeof eleman.b + sizeof eleman.c;
	y=sizeof eleman;
	if(x==y)
		cout << "yapý içerisindekiler ile nesnenin bellekteki kapladýðý alan eþit\n";
	else
		cout << "yapý içerisindekiler ile nesnenin bellekteki kapladýðý alan eþit deðil\n";
	system("PAUSE");
	return 0;
}
