#include <iostream>
using namespace std;
void fakt(int* sayi){
	int sonuc=1;
	for(int x=1;x<=*sayi;x++){
		sonuc*=x;
	}
	*sayi=sonuc;
}
int main()
{
	int y,*ptr;
	cout << "faktoriyeli hesaplanacak sayiyi giriniz: \t";
	cin >> y;
	cout << endl;
	ptr=&y;
	fakt(ptr);
	cout << "girilen sayinin faktoriyeli\t"<< *ptr <<endl;
    system("PAUSE");
    return 0;
}
