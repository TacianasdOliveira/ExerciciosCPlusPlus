#include <iostream>
#include <cmath>
#include <Windows.h>// usei para imprimir os acentos

using namespace std;

int main(){
	SetConsoleOutputCP(CP_UTF8);
	int num1;
	float num2,res,fim;
	
	cout<< "digite o radicando da potenciaçao ";
	cin>> num1;
	cout<< "digite índice ";
	cin>>num2;
	res=1/num2;
	fim=pow(num1,res);
	cout<<"a raiz "<< num2<< " do número "<< num1<< " é igual a :"<< fim;
	
	return 0;
}