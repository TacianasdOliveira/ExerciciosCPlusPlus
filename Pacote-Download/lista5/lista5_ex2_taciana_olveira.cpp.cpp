#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
#include <Windows.h>

int main() {
SetConsoleOutputCP(CP_UTF8);
       int matriz[20];
	   int soma;
	   soma=0;
 
       srand(time(NULL));
       int limite;

       cout<<"Digite o limite do valor: "; 
       cin>>limite;
       
	   for(int i=0; i<20; i++){
	
	         matriz[i]=rand() % limite ; 
	        
	         cout<<"O "<< i+1<<"º elemento da matriz é: "<<matriz[i]<<endl;
			 soma=matriz[i]+soma;
	
}      cout<<"***********************************"<<endl;

         cout<<"A soma desses valores é: "<<soma<<endl;;

        int maior= matriz[0];
		
        for(int i=1; i<20; i++){
			
				if(maior < matriz[i]) 
					maior=matriz[i];			
		}	 cout<<"***********************************"<<endl;
		     cout<<"O maior valor é: "<< maior <<endl;
 
        int menor= matriz[0];
		
        for(int i=1; i<20; i++){
			
				if(menor > matriz[i]) 
					menor=matriz[i];			
		}	 cout<<"***********************************"<<endl;
	         cout<<"O menor valor é: "<< menor <<endl;
 
 
return 0;
}