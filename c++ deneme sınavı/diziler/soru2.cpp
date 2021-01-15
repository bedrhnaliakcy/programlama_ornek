#include <iostream>
using namespace std;
int main(){
	int arr[10];
	for(int i=0;i<10;i++){
		cout << i << " indeks degerini giriniz:\t";
		cin >> arr[i];
	}
	for(int i=0;i<10;i++){
		cout << "\n" << i << ". indeks degeri:\t" << arr[i] << endl;
	}
	system("PAUSE");
	return 0;
}
