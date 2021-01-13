#include <iostream>
#include <locale>
using namespace std;
int main(){
	setlocale(LC_ALL,"TURKISH");  //Bir fabrikada sabit maaþla çalýþan iþçiler aile durumlarýna ve ürettikleri parça sayýsýna göre de ek maaþ almaktadýr. Aþaðýda verilen yönergelere göre iþçilerin maaþlarýný hesaplayan program
int maas,ailedurumu,parcasayisi;
maas =3000;
cout <<"Kaç kiþilik bir aileniz var : ";cin>>ailedurumu;  //3 kiþilik bir aile 50 TL fazla alýr,4 kiþilik bir aile 100 tl fazla alýr 5 üzeri 200 TL fazla alýr.
cout <<"Bu gün kaç parça ürettiniz : ";cin>>parcasayisi;//0-101 parça %5,100-200 parça %10,200-300 parça %15 fazla maaþ alýr.
if(parcasayisi<=100&&ailedurumu<=3)
cout <<"maaþýnýz : "<< (maas*5/100)+maas+50;
else if(parcasayisi<200&&ailedurumu<=4){
cout <<"maaþýnýz : "<< (maas*10/100)+maas+100;	
}
else if(parcasayisi<300&&ailedurumu<=5){
cout <<"maaþýnýz : "<< (maas*15/100)+maas+200;	
}
	
	return 0;
}
