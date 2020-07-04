#include <iostream>
#include <cmath>
#include <Windows.h>// usei para imprimir os acentos

using namespace std;
void tri ();

int main(){
	SetConsoleOutputCP(CP_UTF8);
	
	tri();
	
 	
       return 0;
}
   
   void tri (){
   
     int j, i,n;
	  
	  cout<< "digite n: ";
	  cin>> n;
	  
	  for(i=1;i<=n;i++){
		  
	  
	  for (j=0;j<i;j++){
		  
		  cout <<"*";
	  }
	   
	  cout<<endl;
	  
   }
   
   }