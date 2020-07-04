#include <iostream>
#include <cmath>
#include <Windows.h>// usei para imprimir os acentos

using namespace std;
void tri ();

int main(){
	SetConsoleOutputCP(CP_UTF8);
	
	double a,b;
	
	cout<<" digite o valor do número a: "<<endl;
	cin>>a;
	cout<<" digite o valor do número b: "<<endl;
	cin>>b;
	
	if(a>b){
		cout<<"a é maior que b"<<endl;
		
	}else if( a<b){
		cout<<"a menor que b"<<endl;
	} else {
		cout<<" a é igual a b";
	}
	

	
	return 0;
}