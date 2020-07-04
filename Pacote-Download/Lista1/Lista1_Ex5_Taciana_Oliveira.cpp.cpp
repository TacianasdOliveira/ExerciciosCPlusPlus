#include <iostream>
#include <stdlib.h>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i;
    int num;
    for ( i=55;i<=99;i++){
        num=i;
        cout << i<<endl;

    }
 system("pause");
    return 0 ;
}
