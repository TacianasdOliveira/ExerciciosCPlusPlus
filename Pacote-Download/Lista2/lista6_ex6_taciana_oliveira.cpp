#include <iostream>
#include <cmath>
#include <Windows.h>// usei para imprimir os acentos

using namespace std;


	
namespace maria {
		int idade= 18;
		float cre= 8.3;
		void incrementar_idade() {idade++;}
		
		
}

namespace jose {
		int idade=21;
		float cre=  4.3;
}

namespace taciana {
		int idade= 28;
		float cre=  5.35;
	    void incrementar_idade() {idade++;}
	    void incrementar_cre() {cre++;}
		
}
	int main(){
		SetConsoleOutputCP(CP_UTF8);
		
		cout<<"Idade da Taciana: "<< taciana::idade <<" anos"<< endl;
		taciana::incrementar_idade();
		cout<< "Idade da Taciana encrementada: "<<taciana::idade <<" anos"<< endl;
		cout<< "CRE da Taciana: "<<taciana::cre<<endl;
		taciana::incrementar_cre();
		cout<<" CRE TACIANA ENCREMENTADO: "<<taciana::cre<<endl;
		
	
	return 0;
}