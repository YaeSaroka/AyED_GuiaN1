#include <iostream>
#include <string>
using namespace std;

int main() {
int valor;
    cout <<"Ingrese el valor n°1 "<<endl;
    cin>>valor;
    do
    {
        (valor>=0)? cout <<"El valor ingresado es positivo" : cout<<"El valor ingresado es negativo"<<endl;
       cout <<"Ingrese el valor nuevamente "<<endl;
       cin>>valor;
    } while (valor!=0);
    cout<<"Programa finalizado"<<endl;  

return 0;
}

// ESE IF ES IDÉNTICO A HACER ESTO!
/*
    if(valor>=0)cout<<"El valor es positivo!"<<endl;
    else cout<<"El valor es negativo!"<<endl;
*/