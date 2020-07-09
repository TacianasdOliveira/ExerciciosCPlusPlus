#include <iostream>
#include <Windows.h>
#include <cstdlib>
#include <ctime>

void rondomize_array( int *pt , int tamanho); //função elementos rondomicos
void print_array( int *pt , int tamanho); //função imprimir na tela

using namespace std;
int main(){
	
	SetConsoleOutputCP(CP_UTF8); 
	
	srand(time(NULL)); // para escolher números de acordo com o tempo da máquina
	
	int tam; //declaração do tamanho da matriz
	
	
	cout<<"Digite o tamannho da matriz: ";
	cin>>tam;
	
    int matriz[tam];
	
	rondomize_array( matriz , tam); 
	print_array( matriz, tam);
	
	return 0;
}

void rondomize_array( int *pt , int tamanho){
	
	for(int i=0;i<tamanho;i++){
		*pt= rand() % 100; //coloquei 100 p não ter valores muito alto
		pt += 1;
	}	
}

void print_array( int *pt , int tamanho){
	
	for(int i=0;i<tamanho;i++){
		cout<< *pt <<" É o "<< i+1 <<"º elemento da matriz"<<endl;
		pt += 1;
	}	
}







