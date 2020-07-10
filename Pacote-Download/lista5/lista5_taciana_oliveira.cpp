#include <iostream>
#include <Windows.h>
#include <cmath>
#include<iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

float conversao(float taxadecambio, float valoremreais){
	 
	  cout.fixed;
	  setprecision(2);
	
	  cout<<"o valor da conversão é: " << (valoremreais/taxadecambio) << " doláres americanos "<<endl; //duas casas decimais 
	
	return (valoremreais/taxadecambio) ;
	
	
}

void pseudoaleatorio(){
	
	char caractere;
	
	while(true){
					
		cin >> caractere;
				
		if(caractere == 't')                   
			cout << rand()%6 + 1 << endl;
					
		else if(caractere == 'q')
			break;
	
	}
	
}


void classificacao (int codigo){
	
	if(codigo==1){
		cout<<"Alimento não-perecível"<<endl;
	}else if(codigo==2|| codigo==3 ||codigo==4){
		cout<<" Alimento perecível"<<endl;
	}else if(codigo==5 || codigo==6){
		cout<<" Vestuário "<<endl;
	}else if(codigo==7){
		cout<<" Higiene Pessoal "<<endl;
	}else if(codigo==8 || codigo==9 || codigo==10 || codigo==11 ||codigo==12 || codigo==13 || codigo<=14 || codigo==15 ){
		cout<<"Limpeza e Utensílios Domésticos "<<endl;	
	}else {
		cout<<"Código inválido"<<endl;
	}
}
	

void operacoes(float n, float m,int opera){
	
	
	switch(opera){
		
		case 1: 
		    cout<<"A média entre "<<n<<" e "<<m<<" é igual a: "<<(n+m)/2 <<endl;
		break;
		
		case 2:
		     cout<<"A diferença entre "<<n<<" e "<<m<<" é igual a: "<<(n-m) <<endl;
		break;
		
        case 3:
		      cout<<"O peoduto entre "<<n<<" e "<<m<<" é igual a: "<<(n*m) <<endl;
		break;
		
		case 4:
		      cout<<"A divisão de "<<n<<" por "<<m<<" é igual a: "<<(n/m) <<endl;
		break;
			  
		default:
		    cout<<"Erro: Opção inválida "<<endl;
			
		   // operacoes(n,m);	
		
	}
}

 float potencia(float corrente, float tensao=220){
				 
				 cout<<" O valor da potência é: "<< corrente*tensao<<" W"<<endl;
				 
				 return corrente*tensao;
 }


 float somatorio(float a,float b){
	              float somatotal,soma;
				  int j;
				  for(j=1;j<=b;j++){
                    soma=((-a)+10);
                    somatotal=somatotal + soma;
		         }  
		         cout<<" O resultado da expressão: "<<somatotal;
				 return somatotal;
			}
			
void cardapio(){
    int codigo,n;
	float preco1, preco2,preco3,preco4,preco5, preco6;
	preco1=0;
	preco2=0;
	preco3=0;
	preco4=0;
	preco5=0;
	preco6=0;
	
	cout<<"Código"<<setw(25)<<setfill('.')<<"Produto"<<setw(30)<<setfill('.')<<"Preço unitário"<<endl;
	cout<<"100"<<setw(30)<<setfill('.')<<"Cachoro quente"<<setw(30)<<setfill('.')<<"R$ 1,70"<<endl;
	cout<<"101"<<setw(30)<<setfill('.')<<"Bauru simples"<<setw(30)<<setfill('.')<<"R$ 2,30"<<endl;
	cout<<"102"<<setw(30)<<setfill('.')<<"Bauro com ovo"<<setw(30)<<setfill('.')<<"R$ 2,60"<<endl;
	cout<<"103"<<setw(30)<<setfill('.')<<"Hamburguer"<<setw(30)<<setfill('.')<<"R$ 2,40"<<endl;
	cout<<"104"<<setw(30)<<setfill('.')<<"Cheesebuguer"<<setw(30)<<setfill('.')<<"R$ 2,50"<<endl;
	cout<<"105"<<setw(30)<<setfill('.')<<"Refrigerante"<<setw(30)<<setfill('.')<<"R$1,00"<<endl;	
	
	while(true){
		retorno1:
	cout<< "digite o Código" <<endl;
	cin>> codigo;
	
	if( codigo>105 || codigo<100){
		  cout <<" Código inválido"<<endl;	
		  goto retorno1;
	}
	     cout<< "digite a quantidade"<<endl;
	     cin>>n;
	switch (codigo){
		 
		    case 100:
			        
                    preco1= preco1 + n*1.70;	
				    break;
			case 101:
			       
			        preco2= preco2+ n*2.30;
					break;
			case 102:
			        
			        preco3=preco3 + n*2.60;
					break;		
			case 103:
			        preco4=preco4+ n*2.40;
					break;	
			case 104:
			        preco5=preco4 + n*2.50;
					break;
			case 105:
			        preco6=preco6+ n*1;
					break;	
            
					
	}///fechou switch
	    char op;
	cout << "Deseja fazer mais algum pedido? [S/N]: ";
		cin >> op;
		
		if (op == 'n' || op == 'N')
			break;	
	}/// fechou o while (true)
		
	    float preco_total;
    
        preco_total=preco1+preco2+ preco3 + preco4+ preco5+ preco6;
	
		cout<<"O valor Total é: R$"<< preco_total<<endl;
	
}		
		

int main(){
	SetConsoleOutputCP(CP_UTF8);
	
	cout<<" UNIVERSIDADE FEDERAL DA PARAÍBA "<<endl;
	cout<<" CEAR - DEPARTAMENTO DE ENGENHARIA ELÉTRICA "<<endl;
	cout<<" TÉCNICAS DE PROGRAMAÇÃO "<<endl;
	int opcao;
	do{	
	
	cout<<"[1] para Conversor de meoeda:"<<endl;
	cout<<"[2] para Conversores de unidade:"<<endl;
	cout<<"[3] para Pseudoalatório:"<<endl;
	cout<<"[4] para Classificação de produtos:"<<endl;
	cout<<"[5] para Operações matemáticas:"<<endl;
	cout<<"[6] para Calculo de potência:"<<endl;
	cout<<"[7] para Valores de um somatório:"<<endl;
	cout<<"[8] para Cardápio: "<<endl;
    cout<<"[9] para Idade:"<<endl;
	cin>>opcao;
	
	switch(opcao){
		case 1:
		      cout<<" A opção escolhida foi Conversor de moedas"<<endl;
		      float taxadecambio, valoremreais;
		      cout<<" Conversões de moedas"<<endl;
			  cout<< " Digite a taxa de cambio"<<endl;
			  cin>> taxadecambio;
			  cout<< " Digite o valor em reais"<<endl;
			  cin>>valoremreais;
			  conversao(taxadecambio,valoremreais);			
		
		break;
		
		case 2: 
		cout<<"Questão incompleta"<<endl;
	
		break;
		
		case 3:

		       int sair;
			    cout<<" A opção escolhida foi Pseudoaleatório"<<endl;
				cout << "Escolhi o caractere 't' para gerar os numeros digte q para sair"<<endl;
				while(true){
					 pseudoaleatorio();
	
					cin >> sair;
					
					if (sair == -1)
						break;
				}		     
		
		break;
		
		case 4:
		      int codigo;
		      cout<<" A opção escolhida Classificação de Produtos"<<endl;
			  cout<< "digite o númedo do código"<<endl;
	          cin>>codigo;
			  
	          classificacao(codigo);
			  		     
		break;
		
		case 5:
		     float n,m;
	         int opera;
             cout<<" A opção escolhida foi Operações com dois números"<<endl;
	         cout<<"Digite o primeiro número: ";
	         cin>>n;
	         cout<<"Digite o segundo número: ";
	         cin>>m;
	
	         cout<<" Escolha a operação: "<<endl;
	         cout<<"[1] Média entre os números digitados" <<endl;

             cout<<"[2] Diferença entre os números"<< endl;

             cout<<"[3] Produtos entre os números digitados"<<endl;

             cout<<"[4] Divisão do primeiro pelo segundo"<<endl;
	 
	         cin>>opera;
			 operacoes(n,m,opera);
			  		  
		break;
		
		case 6:
		     float tensao,corrente;
		     cout<<" A opção escolhida foi Calculo de potência"<<endl;
			 cout<<"informe o valor da corrente em Amperes: "<<endl;
			 cin>> corrente;
			 cout<<" informe o valor da tensão em Volts, caso n seja 220V"<<endl;
			 cin>>tensao;
			 potencia(corrente, tensao);
				 
		break;
		
		case 7:
		     cout<<" A opção escolhida foi Somatótio"<<endl;
		    float a,b;
	
            cout<<" digite b: "<<endl;
	        cin>>b;
			
            cout<<" digite a: "<<endl;
	        cin>>a;
            somatorio(a,b);
			
		break;
		
		case 8:
		       cout<<" A opção escolhida foi o Cardápio"<<endl;
		      cardapio();
		break;
		
		case 9:
		    cout<<"Questão incompleta"<<endl;
		break;
		
		default:
		   cout<<" Opção inválida"<<endl;
	}
	       cout<< "Digite 0 para encerrar o programa ou qualquer outro valor para retornar ao menu: "<<endl;
		cin >> opcao;
	
	} while(opcao != 0);


	return 0;

}
	