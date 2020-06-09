#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int tam;
int main ()
{
    cout<<"Ingrese el tamanio del triangulo"<<endl;
    cin>>tam;
    for(int i = 0; i < tam; i++)
    {
        for(int j = tam; j <=0; j--)
        {
            if (i < j)
                cout << " ";
            else
                cout << "*";
        }
        for(int j = 0; j < tam; j++)
        {
            if (j <i)
                cout <<" ";
            else
                cout <<"*";
        }
        cout<<endl;
    }
    fflush(stdin);
    getchar();
    getchar();
    system("clear");
}
