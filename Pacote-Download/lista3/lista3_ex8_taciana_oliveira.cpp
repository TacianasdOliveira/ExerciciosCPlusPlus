#include <iostream>
#include <cmath>
#include <Windows.h>// usei para imprimir os acentos
#include<iomanip> 
using namespace std;


#define DELTA (pow(b,2)-(4*a*c))


int main(){
	
	float quant_fio, de_1_p_2, de_3_p_4, de_5_p_6; // pontos
	
	de_1_p_2=10.25;
	de_3_p_4=8.20;
	de_5_p_6=10.32;
	
	quant_fio= de_1_p_2+de_3_p_4 + de_5_p_6;
	
	//cout<<quant_fio<<endl;
	
	cout<<ceil(quant_fio)<<" m"<<" de fio para comprar "<<endl;
	
	
	return 0;	
	
}
