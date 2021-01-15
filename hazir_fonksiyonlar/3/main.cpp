#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char** argv) {
	int secim;
	double i,j; 
	                                                                                        //örnek 1
	cout << "islem seciniz : " << endl;
	cout << "1. islem kare alma:" << endl;
	cout << "2. islem üs alma" << endl;
	cout << "3. islem e tabaninda logaritma:" << endl;
	cout << "4. islem 10 tabaninda logaritma:" << endl;
	cin>> secim;
	
	if(secim==1){
		cout << "kare koku alinacak sayiyi giriniz:  ";
		cin >>i;
		cout << sqrt(i) << endl;
	}
	else if(secim==2){
		cout << "üssü alinacak sayiyinin tabanini giriniz:  ";
		cin >> i;
		cout << "üssü alinacak sayiyinin üssünü giriniz:  ";
		cin >> j;
		cout << pow(i,j);
	}
	else if(secim==3){
		cout << "sayi giriniz:";
		cin >> i;
		cout << log(i) << endl;
	}
	else if(secim==4){
		cout << "sayiyi giriniz:";
		cin >> i;
		cout << log10(i);
	}
	else cout << "hatali secim!!!";
	
	cout << "\nsayi giriniz:" << endl;
	cin >> i;
	                                                                                             //örnek 2
	cout << "girilen sayidan kucuk,en buyuk tamsayi:" << floor(i) << endl;
	cout << "girilen sayidan buyuk,en kucuk tamsayi:" << ceil(i) << endl;
	                                                                                            //örnek 3
	cout << i << " sayisinin kosinusu--> " << cos(i) << endl;
	cout << i << " sayisinin sinunusu--> " << sin(i) << endl;
	cout << i << " sayisinin tanjanti--> " << tan(i) << endl;
	cout << i << " sayisinin ex degeri--> " << exp(i) << endl;
	cout << i << " sayisinin mutalak degeri--> " << fabs(i) << endl;
	
	system("PAUSE");
	return 0;
}
