#include <iostream>
using namespace std;

int enbuyuk(int,int,int);

int main(){
	int x,y,z;
	
	cout << "uc sayi girini:" << endl;
	cin>> x >> y >> z;
	cout << "sayilarin en buyuyu:" << enbuyuk(x,y,z) << endl;
	
	system("PAUSE");
	return 0;
}
int enbuyuk(int a,int b,int c){
	int enb;
	if(a>b)
	enb=a;
	else 
	enb=b;
	if(enb<c)
	enb=c;
	return enb;
}
