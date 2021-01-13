#include <iostream>
#include <locale>
using namespace std;
  int main() {
 setlocale(LC_ALL,"TURKISH");
 int a,b;
 cout << "ürünün net fiyatý nedir ? ";
cin>>a;
cout<<"KDV KAÇ ?";
cin>>b;
cout<< "Ürünün Satýþ Fiyatý : " << a+a*b/100;
return 0;
}
