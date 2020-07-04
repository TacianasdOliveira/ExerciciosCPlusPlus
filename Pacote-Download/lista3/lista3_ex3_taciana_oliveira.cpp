#include <iostream>
#include <cmath>
#include <Windows.h>// usei para imprimir os acentos
#include <bitset> //fazer operação bit a bit

using namespace std;

#define TENSAO 10

int main(){
    SetConsoleOutputCP(CP_UTF8);
	 
	float r1,r2,rs,rp,is,ip;
	 
	cout<<"digite o valor do resistor 1: "<<endl;
	cin>>r1;
	
	cout<<"digite o valor do resistor 2: "<<endl;
	cin>>r2;
	
	rs=r1+r2; // r. eq. série
	
	rp=(r1*r2)/(r1+r2); //resistencia equiv. paralelo
	
	is=TENSAO/rs;
	
	ip=TENSAO/rp;
	
	cout<<" O valor da corrente com os resitores em série é:"<<is<<"A"<<endl;
	cout<<" O valor da corrente com os resitores em paralelo é:"<<ip<<"A"<<endl;

return 0;

}
