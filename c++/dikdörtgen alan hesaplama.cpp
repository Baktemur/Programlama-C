#include <iostream>
#include <locale>
using namespace std;
int main(){
	setlocale(LC_ALL,"TURKISH");
int kisakenar,uzunkenar,alan;
cout << "Dikdörtgenin kýsa kenar uzunluðu kaçtýr?";cin>> kisakenar;
cout << "Diktördgenin uzun kenar uzunluðu kaçtýr ? ";cin>> uzunkenar;
alan = kisakenar*uzunkenar;
cout<< "Dikdötgenin Alaný : " << alan << "dýr";
	

	return 0;
}
