#include <iostream>

using namespace std;

int main(){

  int faktoriyel = 1, sayi = 0;

  cout << "Sayi giriniz: ";
  cin >> sayi;

  for (int i = 2; i <= sayi; i++){
    faktoriyel *= i;
  }

  cout << faktoriyel;

  return 0;
}
