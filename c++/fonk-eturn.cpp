#include <iostream>
#include <locale>
using namespace std;
 
 void degerdegistir(int &ref){
 	
 	ref=20;	
 }
 int main() {

int a = 10;

cout <<"a'nin degeri : "<< a << endl;
degerdegistir(a);
cout<< " a nin yeni degeri : "<< a << endl;

return 0;

}
