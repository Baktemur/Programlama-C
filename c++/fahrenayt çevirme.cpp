#include <iostream>
#include <locale>
using namespace std;
int main(){
	setlocale(LC_ALL,"TURKISH");
	double urunnet,karyuzdesi,kdv,kar,vergi,satis;
	cout<< "Ürünün alýþ fiyatý nedir?";cin>>urunnet;
	cout<<"Üründen yüzde kaç kar ediliyor?";cin>>karyuzdesi;
	cout<<"KDV yüzde kaçtýr?";cin>>kdv;
	kar = urunnet*karyuzdesi/100;
	cout<< "Ürünün karlý fiyatý : " << urunnet+kar<<endl;
	vergi = urunnet+kar*kdv/100;
	cout<<"Ürünün vergili fiyatý :  "<< vergi+kar<<endl;
	satis =kar+vergi;
	cout << "Ürünün satýþ fiyatý : " << satis<<endl;
	

	return 0;
}
