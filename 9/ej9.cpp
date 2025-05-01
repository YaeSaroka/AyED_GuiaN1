#include <iostream>
#include <string>
using namespace std;

int main() {
int valor1, valor2, valor3;
float valores [3];

    cout <<"Ingrese el valor n°1 "<<endl;
    cin>> valor1;
    cout <<"Ingrese el valor n°2 "<<endl;
    cin>> valor2;
    cout <<"Ingrese el valor n°3 "<<endl;
    cin>> valor3;
    
    cout<<"Los números fueron ingresados en el siguiente orden " << valor1<< " " <<valor2<< " "<<valor3<<" "<<endl;
    if (valor1>valor2) swap(valor1,valor2);
    if(valor1>valor3) swap(valor1, valor3);
    if(valor2>valor3)swap(valor2, valor3);
    cout<<"Los números fueron asignados en el siguiente orden creciente " << valor1<< " " <<valor2<< " "<<valor3<<" "<<endl;
    

return 0;
}