#include <iostream>
using namespace std;
int main()
{
setlocale(LC_ALL,"Turkish");
   double deger;
   cout <<	"Sýcaklýk Deðeri Giriniz : ";cin>>deger;
   
   if(deger>=100)
   cout<<"Madde Gaz haldedir...";
   else if(deger<0){
   	cout<<"Madde Katý haldedir...";
   }
    else if(deger<99&&deger>0)
    cout<<"Madde Sývý haldedir...";   
   return 0;
   }
