/*Leer números por teclado hasta introducir uno negativo*/
#include <iostream>
#include <windows.h>
using namespace std;
int main(){
	int n;
	SetConsoleOutputCP(CP_UTF8);
	cout<<"Ingrese un valor positivo: "<<endl; 
	cin>>n;
	while(n>=0){
		cout<<"Ingrese otro valor positivo:"<<endl;
		cin>>n;
	}
	cout<<"Intgresó un valor negativo"<<endl;
	return 0;
}