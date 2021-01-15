#include <iostream>
using namespace std;
class ornek{
    int notlar;
public:
    friend void al(ornek& ogrenci);
    friend void goster(ornek& ogrenci);
}ogr1,ogr2,ogr3;
void al(ornek& ogrenci){
    cout << "notu gir: ";
    cin >> ogrenci.notlar;
}
void goster(ornek& ogrenci){
    cout << "ogrencinin notu: " << ogrenci.notlar << endl;
}
int main() {
    al(ogr1);
    al(ogr2);
    al(ogr3);

    goster(ogr1);
    goster(ogr2);
    goster(ogr3);

    return 0;
}
