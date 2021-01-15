#include <iostream>
using namespace std;
int main(){
	int arr[10]={12,5,54,2,7,6,8,9,4,6},toplam=1;
	for(int i=0;i<10;i++){
		toplam=toplam*arr[i];
	}
	cout << toplam << endl;
	system("PAUSE");
	return 0;
}
