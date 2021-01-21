//bu program da 2 farkl� araba markalar�n�n baz� modellerinin �nceden tan�ml� bilgileri ile nesne dizisi kullanarak ekrana ��kt� verece�iz.
#include <iostream>
#include <string>
using namespace std;
class vehicle{
private:
	int speed,price,number;// h�z, para, model ve plaka bilgileri i�in de�i�ken tan�mlamas�.
	string model;
public:
	vehicle(int a,int b,int c,string d){//private de�i�kenleri parametre ile nesne dizilerine atama ger�ele�tirece�iz.
		speed=a;
		price=b;
		number=c;
		model=d;
	}
	void info_show(){//ara� bilgilerini ekrana yazd�rmak i�in info_show fonksiyonunu tan�mlad�k
		cout << "-----------------------\n";
		cout << "--VEH�CLE �NFORMAT�ON--\n";
		cout << "Speed:  " << speed << endl;
		cout << "Price:  " << price << endl;
		cout << "Number: " << number<< endl;
		cout << "Model:  " << model << endl;
		cout << "-----------------------\n";
	}
};
int main() {
	int i;
	// nesne dizilerini tan�mlad�k ve i�erisine de�erlerini yap�c� fonksiyonu yard�m� ile de�er atamas� yap�ld�
	vehicle audi[5] ={vehicle(280,50000,1,"A9"),vehicle(250,40000,2,"A1"),vehicle(230,15000,3,"A9"),vehicle(280,50000,4,"A9"),vehicle(280,90000,5,"RS")};
	vehicle tofas[5]={vehicle(1,2,3,"slx"),vehicle(1,2,3,"dogan"),vehicle(1,2,3,"sl"),vehicle(1,2,3,"s"),vehicle(1,2,3,"sahin")};
	cout << "AUD�" << endl;
	for(i=0;i<5;i++){
		audi[i].info_show();//1. araba ��kt�s� i�in
	}
	cout << endl;
	cout << "TOFAS" << endl;
	for(i=0;i<5;i++){
		tofas[i].info_show();//2. araba ��kt�s� i�in
	}
	system("PAUSE");
	return 0;
}
