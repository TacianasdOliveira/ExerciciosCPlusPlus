#include <iostream>
#include <cctype> 
#include <cstring>
#include <Windows.h>

using namespace std;

void contador_vagal (char* nome1,int tam1){
	int cont=0;
	for(int i=0;i<tam1;i++){
		
		if((nome1[i]=='a') || (nome1[i]=='A')|| (nome1[i]=='e')|| (nome1[i]=='E')|| (nome1[i]=='i')||( nome1[i]=='I')||( nome1[i]=='o')|| (nome1[i]=='O')|| (nome1[i]=='u')|| (nome1[i]=='U')){
			
			cont+=1;
		}
	}

 cout<<"A quantidade de vogais em "<<nome1<< " é:"<<cont<<endl;
}


int main(){
	SetConsoleOutputCP(CP_UTF8);
	int tam1 ,tam2 ,tam3;
	
	char nome1[50];
	char nome2[50];
	char nome3[50];
	char vogais[10]={'a','A','e','E','i','I','o','O','u','U'};
	
	cout<<"Digire o nome1 completo"<<endl;
	cin.getline(nome1,50);
	tam1 = strlen(nome1); //verifica o tamanho da string
	
	cout<<"Digire o nome2 completo"<<endl;
	cin.getline(nome2,50);
	tam2 = strlen(nome2);
	
	cout<<"Digire o nome3 completo"<<endl;
	cin.getline(nome3,50);
	tam3 = strlen(nome3);
	
	cout<<nome1<<endl;
	cout<<nome2<<endl;
	cout<<nome3<<endl;
	
	contador_vagal (nome1,tam1);
	contador_vagal (nome2,tam2);
	contador_vagal (nome3,tam3);
	
	
	

	return 0;
	
}

