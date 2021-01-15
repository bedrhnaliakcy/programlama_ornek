#include <iostream>
using namespace std;
class Ev{//sınıfımızı oluşturduk
	int daire_no; //daire, kat, kira ve il için private değişkenlerimizi oluşturduk.
	int kat;
	int kira;
	string il;
public:
	Ev(){//yapıcı fonksiyonumuz(constructive) fonksiyonumuz ile başlangıç degerlerimizi atadık.
		daire_no=6;
		kat=1;
		kira=1000;
		il="Düzce";
	}
	void veri_al(string a,int b,int c,int d){ // veri al fonksiyonu ile parametre yardımıyla nesnelere veri ataması yapıyoruz.
		il=a;
		kat=b;
		daire_no=c;
		kira=d;
	}
	void goster(){ // goster fonksiyonumuz ile ekrana değişkenlerin değerlerini basıyoruz.
		cout << "-----------------------Ev bilgisi-------------------------" << endl;
		cout << "-        Ev " << il << "'de " << kat << ". kat " << daire_no << ". daire " << kira << "'TL kira        -" << endl;
		cout << "----------------------------------------------------------" << endl;
	}
}x;
int main() {
	x.goster();//ilk evimizi gösteriyoruz. başlangıç değeri olan yapıcı fonksiyondaki verileri alacaktır.
	Ev ev[5];// 5 elemanlı bir dizi nesnesi tanımladık. ve aşağıda atamalarını yaptık
	ev[0].veri_al("Antalya", 4, 12, 1000);
	ev[1].veri_al("Ankara", 2, 8, 950);
	ev[2].veri_al("Düzce", 4, 10, 1100);
	ev[3].veri_al("Erzurum", 7, 19, 1300);
	ev[4].veri_al("istanbul", 6, 15, 1000);
	string kosul;
	int sayac=1;
	cout << endl;
	// devam edip etmeyeeğini sorduk devam ise koşul çalışır.
	cout << "bakabileceğiniz 5 adet ev var." << endl;
	cout << "Ev bakmaya devam etmek istiyorsanız evet çıkmak istiyorsaniz hayır yaziniz: ";
	cin >> kosul;
	if(kosul=="evet"){
		for(int i=0;i<sayac;i++){
			ev[i].goster();
			cout << "Ev bakmaya devam etmek istiyorsanız evet çıkmak istiyorsaniz hayır yaziniz: ";
			cin >> kosul;
			if(kosul=="evet"){
				sayac++;
				// devam edip etmeyeeğini sorduk devam ise döngü çalışmaya devam eder.
			}
			else//yoksa konut biter.
				break;
		}
	}
	else
		cout << "gorusuruz!!!" << endl;
	cout << "gorusuruz!!!" << endl;
	system("PAUSE");
	return 0;
}
