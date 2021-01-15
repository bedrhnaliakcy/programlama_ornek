#include <iostream>
#include <string>
using namespace std;

int main() {
	string isim;
	cout << "Lutfen adinizi girin: ";
		getline(cin, isim);
	cout << "Tersten Adiniz: ";
	for(int i=isim.length()-1; i>=0; i--) {
		cout << isim[i];
	}
}
