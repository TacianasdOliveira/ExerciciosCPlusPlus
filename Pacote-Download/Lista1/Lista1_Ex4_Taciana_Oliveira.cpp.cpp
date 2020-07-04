#include <iostream>
#include <stdlib.h>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

       float zero=(5*3.0)/2;

       cout <<" o valor do zero da função y = (2/3)*x -5 é " << zero<<endl;

    system("pause");
    return 0 ;
}

