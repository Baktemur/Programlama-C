#include <iostream>
#include <locale>
using namespace std;
int main(){
	setlocale(LC_ALL,"TURKISH");
double r,pi,alan,yaricap;
cout << "Dairenin yarýçap uzunluðu kaçtýr?";cin>> r; // pi yi 3 alýnýz..
pi =3;
yaricap =r*r;
alan = pi*(yaricap);
cout<< "Dairenin Alaný : " << alan << "dýr";
	return 0;
}
