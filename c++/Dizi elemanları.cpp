#include <iostream>
using namespace std;

void yazdir(int *d,int boyut){
	cout<<"dizi elemanlari :";
	for(int i=0;i<boyut;i++)
	cout<<d[i]<<" ";
	cout<<endl;
}		
	int main(){
	int a[10]={20,30,40,30,6,7,5,4,3,67};
	int b[20]={12,23,23,34,45,43,45,55,67};
	yazdir(a,10);
	yazdir(b,20);
	
	return 0;
}
