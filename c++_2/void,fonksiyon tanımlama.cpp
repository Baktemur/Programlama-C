#include <iostream>
#include <locale>
using namespace std;

 void factorial(int sayi){
 	
int factorial = 1;
for (int i =2;i <= sayi;i++){
factorial *=i;	
	cout<< "Faktoriyel :"<< factorial << endl;
	
}
 	
 }
 int main() {
 int sayi;
 cout << "Sayi giriniz : ";
 cin >> sayi;
 factorial(sayi);
 

 
 
 
return 0;

}
