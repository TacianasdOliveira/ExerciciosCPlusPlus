#include <iostream>
#include <Windows.h>
#include <cmath>

using namespace std;

void honoi (int discos, char origem, char destino, char auxiliar ){
	 
	  if(discos==1){ 
               cout<<"mover disco "<<discos<<" de "<<origem<<" para "<<destino<<endl;  
	  } else{
		 honoi(discos-1,origem, auxiliar, destino);
		 cout<<"mover disco "<<discos<<" de " << origem<<" para "<<destino<<endl;
		 honoi(discos-1, auxiliar, destino,origem);
	  } 
}

int main(){
	
	SetConsoleOutputCP(CP_UTF8); 
	
    cout<<" para 3 discos"<<endl;
	honoi(3,'A','C','B');
	
	cout<<" para 4 discos"<<endl;
	honoi(4,'A','C','B');
	
	cout<<" para 5 discos"<<endl;
	honoi(5,'A','C','B');
	
	cout<<" para 7 discos"<<endl;
	honoi(7,'A','C','B');
	
	return 0;
	
}