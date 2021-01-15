#include <iostream>
using namespace std;
int main(){
	int array[3];
	
	array[0]=10;
	array[1]=12;
	array[2]=13;
	
	cout<< array[0] <<"\n"<< array[1]<< "\n"<< array[2]<< "\n"<< endl;
	
	double array2[]={1.5,2.8,3.6,4.4,5.9,6.5,8.3};
	for(int i;i<7;i++){
		cout << i << ". index degerleri \t"<< array2[i] << endl;
	}
	
	cout<< array2[4]<<"\t"<< endl;
	
	string array3[4];
	
	for(int i=0;i<4;i++) {
		cout << "string deger giriniz.\t"<< endl;
		cin >> array3[i];
}
    for(int i=0;i<4;i++) {
		cout <<i<<". index degeri \t"<< array3[i]<<endl;
}
	
	system("PAUSE");
	return 0;
}
