#include <iostream>
using namespace std;
struct yapi{
	char ad[30];
	int notlar;
};
int main() {
	int a,sayac=1,b;
	cout << "s�n�f ka� ki�i" << endl;
	cin >> a;
	yapi clas[a];
	for(int i=0;i<a;i++){
		cout << sayac << ". ��rencinin c++ notu ve ad�:\n";
		cin >> clas[i].notlar >> clas[i].ad;
		cout << endl;
		sayac++;
	}
	for(int i=0;i<a;i++){
		for(int j=0;j<a;j++){
			if(clas[j].notlar>clas[j+1].notlar){
				b=clas[j].notlar;
				clas[j].notlar=clas[j+1].notlar;
				clas[j+1].notlar=b;
			}
		}
	}
	for(int t=0;t<a;t++){
		cout << "ders notlar�na g�re b�y�kten-k����e do�ru:\t" << clas[t].notlar << endl;
	}
	system("PAUSE");
	return 0;
}
