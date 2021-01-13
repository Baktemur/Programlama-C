#include <iostream>
#include <locale>
using namespace std;
int main(){
	setlocale(LC_ALL,"TURKISH");
int taban,yukseklik,alan;
cout << "Üçgenin taban uzunluðu kaçtýr?";cin>> taban;
cout << "Üçgenin yüksekliði kaçtýr : ";cin>> yukseklik;
alan = (taban*yukseklik)/2;
cout<< "Üçgenin Alaný : " << alan << "dýr";
	

	return 0;
}
