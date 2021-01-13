#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL,"Turkish");
int sayi,i,negatif_sayisi,pozitif_sayisi,sifir_sayisi;
i=1,10,1;
cout<<"sayi gir : ";
cin>>sayi;
if(sayi<0)
negatif_sayisi++;
else if(sayi>0)
pozitif_sayisi++;
else
sifir_sayisi++;

return 0;
}
