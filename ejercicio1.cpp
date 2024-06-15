#include <iostream>
#include <windows.h>
using namespace std;
int multiplos(int a){
	return a*7;
}
int main(){
	int c=1;
	int n, mult;
	SetConsoleOutputCP(CP_UTF8);
	cout<<"Ingrese la cantidad de múltiplos de 7 que desea conocer:"<<endl;
	cin>>n;
	cout<<"Los múltiplos son:"<<endl;
	for (c=1;c<=n;c++){
		mult=multiplos(c);
		cout<<mult<<endl;
	}
	return 0;
}