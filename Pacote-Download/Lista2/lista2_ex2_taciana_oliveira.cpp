#include<iostream>
#include <cmath>
#include <Windows.h>// usei para imprimir os acentos
#include<iomanip>// usei para arrendondamento de números


#define IND 0.333333 //definindo índice:3 da raiz cúbica
#define RA_CUBI pow(num,IND) // definindo a macro

#define R_CUB cbrt(num)// utilizada para a terceira resolução 

using namespace std;

int main () {
	
	SetConsoleOutputCP(CP_UTF8);
	
	//primeira resolução que pensei
	
	float num;
	cout<< " digite um número: ";
	cin>> num;
	cout<< " a raiz cúbica do número " <<num<<" é "<< setprecision(3) << RA_CUBI;
	
	
	/*segundo mode de resolução
	
	float num1,raizc;
	cout<< "digite um num1:";
	cin>> num1;
	raizc=pow(num1,IND); //o índice está definido em IND e o radinando é digitador pelo usuário
	cout<<" a raiz cúbica do número "<<num1<< " é " << raizc;
	
	
	terceiro modo
	float num;
	cout<< " digite um número: ";
	cin>> num;
	cout << "a raiz cúbica de "<< num<< " é "<<R_CUB;
	
	*/
	return 0;
	
	
}