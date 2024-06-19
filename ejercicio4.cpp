/* Se necesita un programa que solicite los N gastos realizados en un viaje. El programa
consultará si desea continuar ingresando gastos, y mostrara al final la suma de los N
gastos.*/
#include <iostream>
#include <windows.h>
using namespace std;
int main(){
	int c=0;
	int s=0;
	int cr=0;
	int n, compra, dc;
	SetConsoleOutputCP(CP_UTF8);
	do{
	cout<<"Ingrese la cantidad de gastos que desea sumar:"<<endl;
	cin>>n;
	cr=cr+n;
	while(c<cr){
		cout<<"Ingrese el valor de la compra realizada: "<<endl;
		cin>>compra;
	    c++;
	    s=s+compra;
	}
	cout<<"¿Desea continuar ingresando compras?"<<endl;
	cout<<"Comprendiendo si=1 y no=2"<<endl;
	cin>>dc;
	}while(dc==1);
	cout<<"La suma de las compras ingresadas es de:"<<s<<endl;
	return 0;

}