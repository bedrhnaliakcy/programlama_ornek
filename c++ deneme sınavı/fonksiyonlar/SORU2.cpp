#include <iostream>
#include <cmath>
using namespace std;

int hesap(){
	int x,sonuc=0;
	cout << "bir kenar uzunlugu giriniz.";cin>>x;
	sonuc=(sqrt(3)/4)*(x*x);
	return sonuc;
}


int main(){
	cout << "eskenar ucgenin alaný" << hesap() << endl;
	system("PAUSE");
	return 0;
}
