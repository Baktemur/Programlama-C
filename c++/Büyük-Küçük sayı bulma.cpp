#include <iostream>
#include <locale>
using namespace std;
  int main() {
 setlocale(LC_ALL,"TURKISH");
 int a,b;
cout << "1.sayýyý giriniz :";
cin>>a;
cout << "2.sayýyý giriniz : ";
cin>>b;

if(a>0)
cout<<"1.sayý pozitiftir : "<<a<<endl;
else
cout<<"1.sayý negatiftir : "<<a<<endl;
 if(b>0)
 cout<<"2.sayý pozitiftir : " << b << endl;
 else
 cout<<"2.sayý negatiftir : "<< b;
  if(b=0) 
 	cout<<"nötr";
 else
 
 
 
return 0;
}
