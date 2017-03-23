#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(int argc, char *argv[])
{
    int numero, i, k=0;
    cout <<"Ingrese el numero a descomponer:  ";
    cin>> numero;
    for (i=2,k=0;numero!=1;i++)
        {
            while ((numero%i) == 0)
                {
                    numero/=i;
                    k++;
                }

            if (k)
                {
                    cout<<" elevado a la "<< i<< "^" << k<< endl;
                    k=0;
                }
        }
    system("PAUSE");
    return EXIT_SUCCESS;
}
