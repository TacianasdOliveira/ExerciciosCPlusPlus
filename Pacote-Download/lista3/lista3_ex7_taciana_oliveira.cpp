#include <cmath>
#include <Windows.h>// usei para imprimir os acentos
#include <iostream>

using namespace std;


int main(){
	 
	
	 int i;
	 
	 do{ 
	 
	 cout<< "Digite a idade da pesssoa"<< endl;
	 cin>> i;
		 
	 }while (i<0);
	 
	 
	 if(i>=0 && i<=10){
		 cout<<" É Criança"<<endl;
		 
	 } 
	   else if(i>10 && i<=15){
		 cout<<" É Adolescente"<<endl;
	 } 
	   else if(i>15 && i<=25){
		 cout<<" É Jovem"<<endl;
	 } 
	   else {
		 
		 cout<<"É Adulto"<<endl;
		 
	 }
	 
	return 0;
}

