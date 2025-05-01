#include <iostream>
#include <string>
using namespace std;

int main() {
int valor1, valor2;

    cout <<"Ingrese el valor n°1 "<<endl;
    cin>> valor1;
    cout <<"Ingrese el valor n°2 "<<endl;
    cin>> valor2;
    if (valor1>valor2) cout<< "El valor más grande es "<<valor1<<endl;
    else if (valor2>valor1) cout<< "El valor más grande es "<<valor2<<endl;
    else cout<< "Los valores son iguales, por ende el valor es  "<<valor1<<endl;
return 0;
}