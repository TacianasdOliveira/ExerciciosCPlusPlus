#include <iostream>
#include <Windows.h>
#include <utility>

using namespace std;
int main(){
	
	SetConsoleOutputCP(CP_UTF8); 

		
	      int vetor1[20] = {0,2,23,32,45,78,89,134,200,233,302,345,1233,1564,2244,2335,3390,4557,6799,23599};
	        cout<<"Imprimindo o conteúdo original da matriz na tela"<<endl;
			
		   for ( int i=0;i<20;i++){
		   cout<<"O "<<i+1<<"° elemento contém: ";
		   cout<<vetor1[i]<<endl;
		   }
	

		   int vetor2[20],i,j;
	
		   for ( i=19,j=0 ; i>=0,j<=19 ; i--, j++){
			   
		   swap(vetor1[i],vetor2[j]);
		
		   cout<<"Em ordem invertida: " << vetor2[j]<<endl;
		   }	
	
	return 0;
}