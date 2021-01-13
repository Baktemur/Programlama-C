#include <iostream>
using namespace std;
int main()
{
   setlocale(LC_ALL,"Turkish");
	double boy=0,kilo=0,vki=0;
	
	cout<<"Boyunuzu Girin (Ör:1.65) :";
	cin>>boy;
	
	cout<<"Kilonuzu Girin :";
	cin>>kilo;
	
	vki=kilo/(boy*boy);
	
	if(vki<18){
		cout<<"Zayýf";
	}
	else if(vki >= 18 && vki < 25){
		cout<<"Normal";
	}
	else if(vki >= 25 && vki < 30){
		cout<<"Kilolu";
	}
	else if(vki >= 30 && vki < 35){
		cout<<"Obez";
	}
	else{
		cout<<"Ciddi Obez";
	}
}
