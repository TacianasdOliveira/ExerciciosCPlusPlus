#include <iostream>
#include <cstdlib>
#include <ctime>
#include <Windows.h>
using namespace std;

class prepaid_card{
private:
  	
	int saldo;
	
public:
	
	prepaid_card(int saldo_ini){
		saldo= saldo_ini;
	}

    prepaid_card(const prepaid_card &outro_saldo){
		cout<<"Novo Cartão ( NOVO OBJETO) cópia. Seu saldo é: ";
		
		saldo= (outro_saldo.saldo)*0;
		cout<<saldo<<endl;
	}
	

	bool spend(int valor_gastar){
		
		if(valor_gastar<=saldo && valor_gastar>0){
			
			saldo = saldo - valor_gastar;
			return true;
			
			
		}else {
			cout<<"Falso-Erro de operação."<<endl;
			return false;
		}
		
	}
       
	int balance(){
		return saldo;
	}
};

int main (){
	SetConsoleOutputCP(CP_UTF8);
	
	
	srand(time(NULL));
	
	int n= rand();//saldo inicial aleatório

	prepaid_card a(n); //criou objeto
	
	cout << "Seu saldo inicial eh: " << a.balance() << endl<<endl; 
	cout<<"Sacando -100000: "<<endl;
	a.spend(-100000);
	cout <<"********************************** "<<endl;
	
	while(true){
		
		int m= rand(); //valor retirada aleatório
			
		cout << "Voce quer sacar: " << m << endl<<endl;
		
		if(a.spend(m)){
			cout << "Foi possivel realizar o saque. Seu saldo restante eh: " << a.balance() <<endl<<endl;
		} else{
			cout << "Nao foi possivel, o seu saldo esta insuficiente. " << endl;
			break;
		}
		
	}
	
cout<<"********* CARTÃO CÓPIA ************"<<endl;
	prepaid_card p2=a; 
	
	return 0;
	
}