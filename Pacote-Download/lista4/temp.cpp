#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;


int main(){
	
	
	//float c2t( float tf){
	
	//extern float tf;
		
	//float cel;
	
	//cout<<" digite o valor dat temperatura em ºF: "<<endl;
	//cin>>tf;
	
	//cel = (vertor-32)*5/9;
	
	float vetor[5]={-23,456,12,89,3};
	
	int i;
	
	for (i=0;i<5;i++){
		
		cout<< vetor[i]<<"ºF é igual a : "<< (vetor[i]-32)*5/9 <<"ºC"<<endl;	
		
	}
		
	//cout<< tf1 << "ºF é igual a : "<< cel <<"ºC"<<endl;	
	return  0;	
}