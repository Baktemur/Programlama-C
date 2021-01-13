#include <iostream>
#include<locale>
using namespace std;
int main(){
setlocale(LC_ALL,"TURKISH");
	
  int sayi;
   cout<<"Sayýyý Girin : ";
   cin>>sayi;
   if(sayi%3==0 && sayi%5==0)
   {
   	cout<<"Girilen sayý 3' e ve 5'e tam bölünüyor.";
   }
   else
   {
   	cout<<"Girilen sayý 3' e ve 5'e tam bölünmüyor.";
   }
	
	
	
	
	






	
	
	
	return 0;
}
