#include <cmath>
#include <Windows.h>// usei para imprimir os acentos
#include <iostream>
using namespace std;

int main(){
	
	SetConsoleOutputCP(CP_UTF8); 
	
	int a,b,c,d,e;
	
	cout<<"digite a"<<endl;
	cin>>a;
	
	cout<<"digite b"<<endl;
	cin>>b;
	
	cout<<"digite c"<<endl;
	cin>>c;
	
	cout<<"digite d"<<endl;
	cin>>d;
	
	cout<<"digite e"<<endl;
	cin>>e;
	
	if(cin.fail()){
		cout<<" digite os número novamente:"<<endl;
	}else if((a>=0 && a<=9 )&& (b>=0 && b<=9) && (c>=0 && c<=9) && (d>=0 && d<=9) && (e>=0 && e<=9)){
		
		 cout<<" Todos estão entre 0 e 9";
		 
	 } else {
		 cout<<" pelo menos um dos números digitados não está entre 0 e 9, execute o programa novamente";
	 }
	
	return 0;
}