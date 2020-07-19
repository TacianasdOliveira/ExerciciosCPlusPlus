#include <iostream>
#include <Windows.h>


using namespace std;
int main(){
	
    SetConsoleOutputCP(CP_UTF8);
	cout<< "*****programa que computecomputecompute computecomput potência elétrica média de n  pontos de um circuito em que seja disponibilizado pelo usuário n pares de dados tensão e corrente*****"<<endl<<endl<<endl;
	float pot_media;
	int tam;
	int pot=0;
	cout<<"Digite tamanho"<<endl;
	cin>>tam;
	
	float tensao[tam];
	float corr[tam];

	for(int i=0;i<tam;i++) {
		cout<<"Digite o valor da tensão do "<<i+1<<"° ponto em v "<<endl;
		cin>>tensao[i];	
		cout<<"Digite o valor da corrente do "<<i+1<<"° ponto em A "<<endl;
		cin>>corr[i];	
		pot=pot + tensao[i]*corr[i];
	
	}
	pot_media=(pot/tam);
	cout<< " O valor da tensão media é: " <<pot_media<<"W";
	return 0;
}