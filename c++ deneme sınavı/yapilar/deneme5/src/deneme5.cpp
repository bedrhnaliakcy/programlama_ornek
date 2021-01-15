#include <iostream>
using namespace std;
struct yapi{
	char ad[30];
	int notlar;
};
int main() {
	int a,sayac=1,b;
	cout << "sýnýf kaç kiþi" << endl;
	cin >> a;
	yapi clas[a];
	for(int i=0;i<a;i++){
		cout << sayac << ". öðrencinin c++ notu ve adý:\n";
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
		cout << "ders notlarýna göre büyükten-küçüðe doðru:\t" << clas[t].notlar << endl;
	}
	system("PAUSE");
	return 0;
}
