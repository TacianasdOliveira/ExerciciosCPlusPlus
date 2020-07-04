#include <iostream>
#include <stdlib.h>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i;
    int num;
    for ( i=5;i<=18;i++){
        num=i%2;
           if(num%2==0){
              printf("numero par: %d\n",i);
           }
    }



}
