#include <iostream>
#include <cmath>
using namespace std;
//progama que calcula E=M*C^2 com funçao 

double calculaEnergia(float m, double c){
	
	double en;
	
	en=m*pow(c,2);
	
	return en;
	
}

double calculamassa (float e, double c){
	double ma;
	ma=e/pow(c,2);
	
	return ma;
}


void init(){

	int op;
	double r,c=300000000;
	
	cout<< "digite 1 para calcular energia e 2 para calcular a massa"<<endl;
	cin>> op;
	if(op==1){
		float m;
		
		cout<<"informe a massa "<<endl;
		cin>>m;
		
		r=calculaEnergia(m,c);
		
		cout<<" a energia é:" <<r<<endl;
		
	}	else if (op==2){
		
	    float e;
		
		cout<<"informe o valor da enegia"<<endl;
		cin>>e;
		
		r=calculamassa(e,c);
		
		cout<<"a massa é"<<r<<endl;
				
		
	}else 
		cout<< "valor inválido"<<endl;
}


int main(){
	
	cout<<" esse programa calcula E=M*C^2"<< endl;
	init();
	return 0;
		
}