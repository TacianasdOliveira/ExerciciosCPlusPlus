#include <iostream>
#include <cmath>
#include <Windows.h>// usei para imprimir os acentos
#define PI 3.1415
#define AREA r*r*PI
#define PERIMETRO 2*r*PI

using namespace std;

int main(){
	SetConsoleOutputCP(CP_UTF8);
	float r;
	cout<<" digite o raio do circulo ";
	cin >> r;
	cout<<"o valor de PI é: " <<PI;
	cout<<"O valor da área do círculo é: "<< AREA;
	cout<<" O perímetro do círculo é: "<<PERIMETRO;
	
	
	return 0;
	
	
	
}