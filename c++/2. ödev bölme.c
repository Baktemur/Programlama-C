#include<iostream>
using namespace std;
main(){
int bas,x,bit,i,top=0,say=0;
 cout<<"Ba�lang�� de�erini gir : ";cin>>bas;
 cout<<"Biti� de�erini gir : ";cin>>bit;
 cout<<"Ka�a b�lmek istersiniz : ";cin>>x;
 for(i=bas;i<=bit;i++){
 	if(i%x==0){
 	say++; top+=i;	
}}
 cout<<"Verilen aral�kta  " << say << " adet say�  "<<x<<"  ile b�l�nebilir";
 cout<<"\nVerilen aral�ktaki  " <<x<<  "  ile b�l�nen say�lar�n toplam� : "<< top;






















}

