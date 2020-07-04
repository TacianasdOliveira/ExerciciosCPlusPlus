#include <iostream>
#include <cmath>
#include <Windows.h>// usei para imprimir os acentos

using namespace std;


#define EQUACAO_Y ((0.4*(pow(x,2)))-(12*x)-3.5)


int main(){
	
	SetConsoleOutputCP(CP_UTF8);
	
	float x;
	
	cout<<" digite o valor do número x da equação y= 0.4x^2 – 12x – 3.5 "<<endl;
	cin>>x;
	cout<<"O valor de Y na equação  y= 0.4x^2 – 12x – 3.5 = "<<EQUACAO_Y<<endl;
	
	
	return 0;
}