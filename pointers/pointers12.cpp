#include <iostream>
using namespace std;

void fakt(int* sayi) {
    int sonuc = 1;
    for (int i = 0; i < 10; i++) {
        for (int x = 1; x <= *sayi; x++) {
            sonuc *= x;
        }
        *sayi = sonuc;
        cout << i << ". index'in faktoriyeli:\t" << *sayi << endl;
        sayi++;
        sonuc = 1;
    }
}
int main()
{
    int* ptr, arr[10];
    ptr = &arr[0];


    /*
    cout << "bir sayi giriniz\n";
    cin >> x;
    cout << "girdiginiz sayinin adresi" << ptr << endl;
    */

    /*
    cout << "bir karakter dizini giriniz.\n";
    cin >> isim;
    ptr = isim;
    while (ptr[i]!=NULL)
    {
        cout << ptr[i];
        i++;
        cout << endl;
    }
    cout << "girdiginiz karakter dizinin adresi ve verisi:\t"<< ptr << endl;
    */

    /*
    cout << "*ptr'nin ilk degeri:   " << *ptr << endl;
    cout << "++*ptr'nin degeri:     " << ++*ptr << endl;
    cout << "*++ptr'nin degeri:     " << *++ptr << endl;
    cout << "*ptr++'nin degeri:     " << *ptr++ << endl;
    cout << "++*ptr++'nin degeri:   " << ++*ptr++ << endl;

    cout << "&*ptr'nin degeri:      " << &*ptr << endl;
    cout << "*&ptr'nin degeri:      " << *&ptr << endl;
    cout << "*ptr'nin yeni degeri:  " << *ptr << endl;
    */

    cout << "ekrana  10 adet sayi giriniz: \n";
    for (int i = 0; i < 10; i++) {
        cout << i << ". sayi:\t";
        cin >> arr[i];
        cout << endl;
    }
    fakt(ptr);

    system("PAUSE");
    return 0;
}
