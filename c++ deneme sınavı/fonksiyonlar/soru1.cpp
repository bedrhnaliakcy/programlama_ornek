#include <iostream>
using namespace std;

int toplam(){
	
	int x,topla=0;
	
	for(int i=1;i<11;i++){
	cout << "bir sayi giriniz:\t";
	cin >> x;
	topla=topla+x;
    }
    return topla;
}


int main(){
	
	cout << toplam() << endl;
	
	system("PAUSE");
	return 0;
}
