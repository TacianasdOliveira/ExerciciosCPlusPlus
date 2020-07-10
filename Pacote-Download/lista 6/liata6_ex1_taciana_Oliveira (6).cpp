#include <iostream>
#include <cstdlib>
#include <ctime>
#include <Windows.h>
using namespace std;
void print_inc_print ( int *pn);
int main() {
SetConsoleOutputCP(CP_UTF8);

    
	int x=78;
	print_inc_print(&x);

return 0;
}
void print_inc_print ( int *pn){
	cout<<*pn<<" É o valor do inteiro."<<endl;
	*pn+=1;
	cout<<*pn<<" É o valor do inteiro encrementado"<<endl;
}


