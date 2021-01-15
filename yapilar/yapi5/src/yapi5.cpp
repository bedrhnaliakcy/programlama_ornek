#include <iostream>
using namespace std;
typedef struct yapi{
	char *ad,*soyad,*gorevi;
	int calisanno;
}eleman;
int main() {
	eleman a[]={"bedo","ali","akcay",1,"samet","ikbal","serpil",2,"mami","müco","bed",3};
	cout << "calisan listesi" << endl;
	cout << "ad: soyad: gorevi: no: " << endl;
	for(int i=0;i<3;i++){
		cout << a[i].ad << " " << " " << a[i].gorevi << " " << a[i].soyad << " " << a[i].calisanno << endl;
	}

	system("PAUSE");
	return 0;
}
