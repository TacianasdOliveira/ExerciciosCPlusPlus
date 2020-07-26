#include <iostream>
#include <Windows.h>
#define PI 3.1415

using namespace std;

class Circulo{

	
	float raio;
	
public:
	float setar_raio(float ra){
		
		return raio=2.5*ra ;
	}

	float area(){
		
		return PI*raio*raio;
    }	
	float comprimento(){
		return 2*PI*raio;
	}
};






int main(){
	SetConsoleOutputCP(CP_UTF8);
	float ra;
	Circulo a;
	cout<<"Digite o raio: ";
	cin>>ra;
	cout<<a.setar_raio(ra)<<endl;
	cout<< a.area()<<endl;
	cout<<a.comprimento()<<endl;
	
	
	return 0;
}