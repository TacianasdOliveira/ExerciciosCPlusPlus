#include <cmath>
#include <Windows.h>// usei para imprimir os acentos
#include <iostream>

using namespace std;

int main(){
	
	SetConsoleOutputCP(CP_UTF8); 
	
	
	int u,n;
	
	char a; 
	
	cout<< " digite um número de 0 a 8: "<<endl;
	cin>> n;
	
	cout<<"digite um caracter: "<<endl;
	cin>>a;
	
	u=a&1; 
	
	if (n>=0 && n<=8){

	cout << " o ultimo bit do caracter digitado é:"<<u; 
			
	} else {
		
		cout<<"digite um número válido(entre 0 e 8): ";
	}
	
	return 0;
	
}