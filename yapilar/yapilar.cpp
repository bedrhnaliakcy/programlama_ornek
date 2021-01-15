#include <iostream>
using namespace std;
void printarr(const int *ptr1,const int *ptr2){
	for(;ptr1 != ptr2;ptr1++){
		cout << *ptr1 << endl;
	}
}
int main(){
	
	
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	printarr(arr+3,arr+7);
	
	
	return 0;
}
