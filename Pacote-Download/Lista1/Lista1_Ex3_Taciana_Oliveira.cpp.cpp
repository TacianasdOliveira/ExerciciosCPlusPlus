#include <iostream>
#include <stdlib.h>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num=5;

    //cout << "digite num"<< endl;
    //cin>> num;

    if(num>0){
        cout <<"positivo\n";
    }else{
        if(num<0){
        cout <<"negativo\n";
        }
           else{
            cout << " é igual a zero\n";
           }
    }


    system("pause");
    return 0 ;
}




















