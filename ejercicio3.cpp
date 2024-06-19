/*Realizar un algoritmo que sume los N primeros números naturales usando bucles*/
#include <iostream>
#include <windows.h>
using namespace std;
int main(){
	int i;
	int s=0;
	int n;
	SetConsoleOutputCP(CP_UTF8);
	cout<<"Ingrese la cantidad de números deseados en la suma: "<<endl;
	cin>>n;
	for(i=1; i<=n; i++){
		s=s+i;
	}
	cout<<"La suma de dichos números es:"<<s<<endl;
	return 0;
}
