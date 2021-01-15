#include <iostream>
using namespace std;
int main(){
	int i,y=0,z=0,matris[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	string a;
	cout << "deger gormek istiyormusun.\t";
	cin>>a;
		if(a=="evet"){
		cout<< "en fazla 9 deger görebilirsiniz.\n"<< endl;	
		   cout << "kac deger bakacaksin.\t";
		   cin >> i;
		   cout<< "en fazla 0,1,2 yaza bilirsin.\n"<< endl;
		   cout<< "en fazla 9 deger görebilirsiniz.\n"<< endl;
		   for(int x=0;x<i;x++) {
		   	cout<< "unutma indexler 0'dan baslar.\n";
		   	cout<< "kacinci index'in satiri\n"<< "kacinci index'in sutunu\n";
		   	cin >> y >> z;
		   	cout << y << ".satir\t"<< z << ".sutun degeri\t"<< matris[y][z] << "\n"<<endl;
		   }
		}
		system("PAUSE");
		return 0;
}
