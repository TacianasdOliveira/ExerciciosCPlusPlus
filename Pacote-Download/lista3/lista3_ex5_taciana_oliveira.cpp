#include <iostream>
#include <cmath>
#include <Windows.h>// usei para imprimir os acentos

using namespace std;


#define DELTA (pow(b,2)-(4*a*c))


int main(){
	
	SetConsoleOutputCP(CP_UTF8); 
	
	
	float x1;
	float x2;
	float a= 2;
	float b= -16;
	float c= -18;
	
	/* Caso pedisse do usuário a,b, e c.
	
	float a,b,c;
	cout<<"digite a"<<endl
	cin>>a;
	cout<<"digite b"<<endl
	cin>>b;
	cout<<"digite c"<<endl
	cin>>c;
	
	*/
	
	x1=(-b+sqrt(DELTA))/(2*a);
	
	x2=(-b-sqrt(DELTA))/(2*a) ;
	
	 if( DELTA<0){
		 cout<<"A equação não presenta raiz real"<<endl;
		 
	 }else if(DELTA>0){
		 cout<<" A equação apresenta duas raízes reais, são elas: "<<x1<<" e "<<x2<<endl;
		 
	 } else{
		 cout<<" A equação apresenta uma raiz real: "<<x1;
	 }
	
	return 0;
}