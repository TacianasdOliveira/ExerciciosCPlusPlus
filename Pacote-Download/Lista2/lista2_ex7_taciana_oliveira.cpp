#include <iostream>
#include <cmath>
#include <Windows.h>// usei para imprimir os acentos

using namespace std;

int main(){
	SetConsoleOutputCP(CP_UTF8);
	
	float peso, alt, imc,ALT;
	
	cout<<"Digite o peso em kg: ";
	cin>> peso;
	
	cout<<"digite a altura em m: ";
	cin>> alt;
	
	ALT=pow(alt,2);
	
	imc=peso/ALT;
	
	cout<<" seu imc é: "<<imc<<" e você está com: "<<endl;
	
	
	if (imc<18.5){
		cout<<"Abaixo do peso";
	} else 
	   if (imc>=8.5 && imc<=24.9){
		   cout<<" Peso nornal";
	
	} else
	      if (imc>=25 && imc<=29.9){
			  cout<<" Sobrepeso";
			 
	}else
		     if(imc>=30 && imc<=34,9){
				 cout<<" Obesidade grau 1";
				 
	}else
                 if(imc>=35 && imc<=39,9){
				 cout<<" Obesidade grau 2";
				 
	}	else
			        
						cout<<" Obesidade grau 3";
						
						
						
						return 0;
					}		 	
	
	
	
	
