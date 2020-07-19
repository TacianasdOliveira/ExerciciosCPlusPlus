#include <iostream>



using namespace std;


int main(){
	
	char letras[8];
	
	cout<<"*********Entrada de 8 caracteres dizer se so tem menusculo******"<<endl;
	int cont=0;
	for(int i=0;i<8;i++){
		cout<<" Digite a senha de 8 caracteres"<<endl;
		cin>> letras[i];
	}	
	for(int i=0;i<8;i++){
	       if(letras[i] >='A' && letras[i]<='Z'){
			   
			   cont =cont+1;
	}
	
    }
	if (cont>0)
	    cout<<"ha "<<cont<<" letras maiuscula" ;
	else 
		cout<<" apenas letras menuscula"<<endl;
	
	
	return 0;
}