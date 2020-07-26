#include <iostream>
#include <Windows.h>
#include <cstdlib>

using namespace std;

int main(){
SetConsoleOutputCP(CP_UTF8);
	
	
	int vetor[10];
	int* p=vetor;
	
	
	
	for( int i=0; i<10; i++){
		*p = rand()%10;
		
	}
    for( int i=0; i<10; i++){
		cout<<vetor[i]<<endl;
		
	}

return 0;
}