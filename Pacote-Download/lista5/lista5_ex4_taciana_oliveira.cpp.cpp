#include <iostream>
#include <cstdlib>
#include <ctime>
#include <Windows.h>
#include <cmath>
using namespace std;

void randomize_array(int *pt);
float media_matriz(int *pt);

float desvio_padrao( int *pt, float media);

int main() {
SetConsoleOutputCP(CP_UTF8);

    srand(time(NULL));
	int matr[25];
	float med;
	randomize_array(matr);
	
	for(int i=0;i<25; i++){
		cout<<"O "<<i+1<<"º elemento da matriz é: "<<matr[i]<<endl;		
	}
	med=media_matriz(matr);
	desvio_padrao( matr,med);
	
	
return 0;
}

void randomize_array(int *pt){
	for(int i=0;i<25; i++,pt++){
		*pt=rand()%100;
	}
}

float media_matriz(int *pt){
	float valor=0;
	for(int i=0;i<25;i++,pt++){
	    valor=(valor + *pt);
	}
	cout<<"O valor da média de todos os elementos é: "<<valor/25<<endl;
	return valor/25;
}

float desvio_padrao( int *pt, float media){
	float desvio, somatorio=0;
	for(int i=0;i<25;i++,pt++){
	    somatorio=pow((*pt-media),2) + somatorio;
		
	}
	desvio=sqrt(somatorio/25);
	cout<<"O desvio padrão é: "<<desvio<<endl;
	
	return desvio;
	
	
}



















