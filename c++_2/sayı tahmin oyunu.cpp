#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
    using namespace std;
    int main() {
    int randomsayi,kullanicisayi,hak=0;
    srand(time(NULL));
    randomsayi=rand()%10;
kullanicisayi<=3;
do{
    hak++;
cout<<"sayiyi tahmin ediniz: ";
cin>>kullanicisayi;
if(kullanicisayi>randomsayi&&hak<3)
cout<<"\n"<<"Sayi daha kucuk:"<<endl;
else if(kullanicisayi<randomsayi)
cout<<"\n"<<"Sayi daha buyuk:"<<endl;
else{
    cout<<"dogru tahmin"<<kullanicisayi<<endl;
    break;
        cout<<"hakkiniz kalmadi"<<hak;
        break;
    
}
}
while(randomsayi!=kullanicisayi&&hak<3);
 
cout<<"Kalan hakkiniz 0 "<<" Bizim Bank Kazandi $$$";
 
return 0;
}
