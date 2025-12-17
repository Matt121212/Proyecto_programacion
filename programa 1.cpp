#include <iostream>
#include <string>
using namespace std;
int main(){
	string apellidos[2][3][2] = {
	{
		{"Vasquez", "Rodriguez"},
		 {"Basantes", "Pilataxi"},  
		{"Quimbita", "Perez"}
	},
	{
		{"Vasquez", "Rodriguez"},
		{"Basantes", "Pilataxi"},
		{"Quimbita", "Perez"}	
	}
	};
	cout << apellidos[0][1][1];
	return 0;
}





