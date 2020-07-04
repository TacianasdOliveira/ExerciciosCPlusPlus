#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;
//programa que converte temp. em celcius para fahrenheit e vice versa


float c2t( float tf);
extern float vetor[5];

float f2c( float tc){
	

	float fah;
	//cout<<"digite o valor da temperatura em ºC: "<<endl; // Caso pedisse a informação do usuário 
	//cin>>tc;
	fah = 32+(tc*9/5);
	cout<< tc << "ºC é igual a : "<< fah <<"ºF"<<endl;	
	
	
	return  fah;	
	
}
int main(){
	
	SetConsoleOutputCP(CP_UTF8);
	int n;
	
	float result1,result2;
	
	cout<<" escolha 1 para saber o valor da temperatura em Fahrenheit ou 2 para saber o valor da temperatura em Celcius: ";
	cin>>n;
	
	if(n==1){
		
 		 c2t(tf);
		  
	}else if(n==2){		  
		  result2=f2c(-47); 
		  result2=f2c(23); 
		  result2=f2c(694); 
		  result2=f2c(243); 
		  result2=f2c(13); 
	} else 
		 cout<<" Dígito inválido"<<endl;
	
	 return 0;	 	
}