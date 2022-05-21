#include<cstdlib>
#include<iostream>
#include<string>


using namespace std;

int main(){
	
	int v1,v2,v3;
	string nombre1, nombre2, nombre3;
	
	cout << "Ingrese 3 nombres:" << endl << "\t";
	cin >> nombre1 >>nombre2 >> nombre3;
	
	cout << "\nLon nombres son: " << "\n\t" << nombre1 << "\n\t" << nombre2 << "\n\t" << nombre3 << endl;
	
	v1 = rand() % 3;
	
	
	
	cout << v1;
	if(v1 == 1){
		cout << "\nCase #1: " << nombre1 << " a " << nombre2 << "." << endl;
	}
	
	if(v1 == 2){
		cout << "\nCase #1: " << nombre1 << " a " << nombre3 << "." << endl;
	}
	
	do{
		v2 = rand() % 3;
		cout << "\nNumero random: " <<v2;
	}while(v2 != v1);
	
	if(v1 == 0){
		cout << "Case #2: " << nombre2 << " a " << nombre1 << "." <<  endl;
	}
	
	if(v1 == 2){
		cout << "Case #2: " << nombre2 << " a " << nombre3 << "." <<  endl;
	}
	
	if((v1 == 1 && v2 == 2) || (v1 == 2 && v2 == 1)){
		v3 = 0;
	}
	
	if((v1 == 2 && v2 == 3) || (v1 == 3 && v2 == 2)){
		v3 = 1;
	}
	cout << v3;
	
	if(v3 == 0){
		cout << "Case #3: " << nombre3 << " a " << nombre1 << "." <<  endl;
	}
	
	if(v3 == 1){
		cout << "Case #3: " << nombre3 << " a " << nombre2 << "." <<  endl;
	}
	
	return 0;
}
