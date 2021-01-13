//Alan = taban*yükseklik  Hacim: V = pi.r2.h
 #include <iostream>
 using namespace std; // pi 3 alýnýz
 int main(){
 int alan,hacim,r,h,t;
cout << "Yari Cap Degeri Giriniz : ";cin>>r;
cout << "Yukseklik Degeri Giriniz : ";cin>>h;
cout << "Taban Alanýný Giriniz : ";cin>>t;
alan =t*h;
hacim =(3*(r*r)*h);
 	cout<<"Silindirin Alani : "<<alan<<endl;
 	cout<<"Silindirin Hacmi : "<<hacim<<endl;
 	return 0;
 }

