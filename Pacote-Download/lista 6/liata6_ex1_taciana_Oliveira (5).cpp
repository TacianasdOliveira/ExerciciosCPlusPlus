#include <iostream>
#include <Windows.h>
#include <utility>
#include <cstdlib>
#include <ctime>
void randomize_array(int *pt);
using namespace std;
int main(){
	
	SetConsoleOutputCP(CP_UTF8);
	srand(time(NULL));
	 
	 
	int matriz[15];
    int aux; //precisei do auxiliar para mudar a ordem dos elementos 
	
    randomize_array(matriz); //coloquei a função rondomize para gerar os valores dos elementos aleatórios.
	
	for(int i=0; i<15;i++){
		cout<<matriz[i]<<endl; // expressar os elementos na tela
	}
	
	int i,j;
		for( i= 0; i<15; i++){ //fixei o i na primeiro posição da matriz
			for( j=i+1; j<15; j++){ //fizei o j no segundo elemento da matriz,para fazer a comparação entre os elementos
			
		    if(matriz[i]> matriz[j]){ 
			aux=matriz[i];
			matriz[i]=matriz[j];
			matriz[j]=aux;
			
		}
		}
		}
    cout<<" ************** VALORES EM ORDEM CRESCENTE *********** "<<endl;
    for( i= 0; i<15; i++){
		cout<< matriz[i]<<endl; //imprimir os valores em ordem crescente 
	}


return 0;	
}


void randomize_array(int *pt){
	for(int i=0;i<15; i++,pt++){
		*pt=rand()%100; //DEIXEI 100 POR OPÇÃO
	}
}