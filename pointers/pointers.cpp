#include <iostream>
using namespace std;
int main(){
	int arr[3]={3,5,7};
	int sayi2=5;
	int* p;
	for(int i=0;i<3;i++){
	    p=&arr[i];
	    cout << "arr degiskeninin adresi  " << p << "  >>>>>\t";
	    cout << "degeri  " << *p <<endl;
	}
	    p = &sayi2;
		cout << p << endl;
		
	system("PAUSE");
	return 0;
}
