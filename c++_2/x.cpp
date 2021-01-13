#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
    using namespace std;
    int main() {
    int randomsayi,kullanicisayi,hak=0;
    srand(time(NULL));
    randomsayi=rand()%10;

do{
    hak++;
cout<<"0-10 arasi sayi giriniz : ";
cin>>kullanicisayi;
if(kullanicisayi>10){
        cout<<"Yanliþ sayi girdiniz.";
        break;
    }
if(kullanicisayi>randomsayi&&hak--)
cout<<"\n"<<"Sayi daha kucuk :"<<endl;
else if(kullanicisayi<randomsayi)
cout<<"\n"<<"Sayi daha buyuk :"<<endl;
else{
    cout<<"\n"<<"dogru tahmin :"<<kullanicisayi<<endl;
    }
}
while(randomsayi!=kullanicisayi&&hak--);
 
cout<<"\n"<<"Kalan hakkiniz = "<<hak<< "Girdiginiz rakam sayisi : "<< kullanicisayi  << endl;
for(kullanicisayi;kullanicisayi<10;kullanicisayi--)
cout << "Yazdýðýnýz Rakamlar : " << kullanicisayi;
break;
}
