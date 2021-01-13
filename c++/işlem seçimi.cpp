#include <iostream>
#include <locale>
using namespace std;

int main() {
setlocale(LC_ALL,"TURKISH");
int islem;

cout<< "iþlemi giriniz :";
cin >> islem;
 switch(islem){
 	
 	case 1:
 	cout << "1. Ýþlemi seçtiniz...";
 	break;
 	case 2:
 		cout << "2. Ýþlemi seçtiniz...";
 	break;
 	case 3:
 		cout << "3. Ýþlemi seçtiniz...";
 	break;
 	case 4:
 		cout << "4. Ýþlemi seçtiniz...";
 	break;
 	default:
 		cout << "Geçersiz iþlem ..!";
 	break;
 }
 
return 0;
}

