#include <iostream>
using namespace std;

 struct Employee {
 	int id;
 	string name;
 	string department;

 };
	int main(){
	
	Employee employee1 = {12, "BAktemur Feyzullah","PROGRAMMER"};
	employee1.name ="Programmer Feyzullah Baktemur";
	cout << employee1.name << endl;
	
	return 0;
}
