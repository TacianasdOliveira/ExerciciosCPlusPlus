#include <iostream>
#include <string>


using namespace std;



int main(){
	
	char nome[]={'t','a','c','i'};
	char letra;
	cout<< "escolha uma letra ( t a c i ) para saber a posicao dela na string"<<endl;
	cin>>letra;
	if(letra>='a' && letra<='z' ){
	    for( int i=0;i<4;i++){
			if( letra==nome[i]){
			cout<<" A letra " <<letra<<" esta na posicao: "<< i+1<<endl;
			}
	    } 
	}else{
          cout<<"escolha uma letra entre as opcoes t a c i, menusculas: "<<endl;

		 }
	
	return 0;
	
}