#include <iostream>
#include <locale.h>
#include <string.h>
using namespace std;
main(){
	
	setlocale(LC_ALL,"Turkish");
int top,ort,vize,final;

cout<< "vize notunuzu giriniz : "; cin >> vize;
cout<< "final notunuzu giriniz : "; cin>> final;

top=vize+final;
ort=top/2;
cout<< "ortalama : " << ort << endl;

if(ort<40)
{
	cout << "FF Kaldýnýz";
}
else if(ort<50){
	cout << "FD Kaldýnýz";
}
else if(ort<55)
{
	cout << "DD Sorumlu Geçtiniz";
}
else if(ort<60)
{
	cout << "DC Sorumlu Geçtiniz";
}
else if(ort<65)
{
	cout << "CC Geçtiniz";
}
else if(ort<70)
{
	cout << "CB Geçtiniz";
}
else if(ort<80)
{
	cout << "CC Geçtiniz";
}
else if(ort<90)
{
	cout << "BA Geçtiniz";
}
else if(ort<100)
{
	cout << "AA Geçtiniz";
}







}




















































	
	
	

