#include <iostream>
using namespace std;
void incrementa(int *num){
	*num=*num+1;
	
}


int exemplo(int i, int j){
return i * i * j;
}

int main(){
	int i = 3, j = 4, (*p)(int,int);
	p = &exemplo;
	cout << (*p)(12,45) << endl;
	cout << (*p)(i,j) << endl;

	int num=10;
	incrementa(&num);
	cout<< num<<endl;
	
	int n=9; //inicializando uma variável
	int *p; // criando um ponteiro 
	p=&n; //atribuindo o endereço da variável para o ponteiro
	
	cout<<" o valor de n"<<n<<endl; //imprimindo o valor de n
	
	cout<<" o endereco de n"<<p<<endl;//imprimindo o endereço de n
	
	cout<<" o endereco de n"<<&n<<endl;//imprimindo o endereço de n
	
	cout<<" o endereco de n"<<&p<<endl;//imprimindo o endereço do ponteiro
	
	cout<<" o conteudo apontado pelo ponteiro "<<*p<<endl;
	
	
	
	
	int lista[5] = {25, 34, 52, 74, 60};
	int *po = lista;
	cout << "Array" << endl;
	for(int i = 0; i < 5; i++){
		cout << lista[i] << endl;
	}
	
	cout << "Array acessada por ponteiro" << endl;
	for(int i = 0; i < 5; i++){
		cout << *(lista+i) << endl;
	}
	
	cout << "Array acessada por ponteiro" << endl; 
	for(int i = 0; i < 5; i++){
		cout << *po << endl;
		po++;
	}
	
	
	int *ptr[5]; 
	int valorA = 2; 
	int valorB = 1; 
	int valorC = 5; 
	int valorD = 8; 
	int valorE = 3;
	ptr[0] = &valorA; 
	ptr[1] = &valorB;
	ptr[2] = &valorC; 
	ptr[3] = &valorD;
	ptr[4] = &valorE;
	
	for(int i = 0; i < 5; i++) cout << *ptr[i] << endl;
	
	char c; //inicializou uma variável 
    char *pc; // criou o ponteiro 
	pc = &c;// atibuiu o endereço da variavel ao ponteiro 
	
	for (c = 'A'; c <= 'Z'; c++){ 
	cout << *pc<<endl; //imprime o conteudo apontado pelo ponteiro 
	}
	
	
	
	
	return 0;
	
}