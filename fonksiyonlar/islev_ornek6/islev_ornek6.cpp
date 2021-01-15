#include <iostream>
using namespace std;
int obeb(int x,int y);
int main(){
  int a,b;

  cout << "iki pozitif sayi giriniz." << '\n';
  cin >> a >> b;
  cout << a << " ve " <<  b << " obeb'i: " << obeb(a, b);
  return 0;
}
int obeb(int x,int y){
  if (y != 0)
       return obeb(y, x % y);
    else
       return x;
}
