#include <iostream>
using namespace std;
int main(){
	
int a[5][5],i,j,m,n;
cout<<"matrisin satir sayisini gir";cin>>m;
cout<<endl<<"matrisin sutun sayisini gir";cin>>n;	
for(i=0;i<m;i++){
	for(j=0;j<n;j++){
   	cout<<"a["<<i<<"]["<<j<<"].elemani gir"<<endl;cin>>a[i][j];	
		
}
}
for(i=0;i<m;i++){
 	for(j=0;j<n;j++){
 	cout<<"\t"<<a[i][j]<<" ";
	 }	
cout<<endl;
	
}		
	return 0;
}
