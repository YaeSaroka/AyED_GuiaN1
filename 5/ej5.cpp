#include <iostream>
#include <string>
using namespace std;

int main() {
float angulo1, angulo2, resultado;
const int suma = 180;

    cout <<"Ingrese el valor del ángulo 1 "<<endl;
    cin>> angulo1;
    cout <<"Ingrese el valor del ángulo 2 "<<endl;
    cin>> angulo2;
    resultado= 180 - (angulo1 + angulo2);
    cout<< "El tercer ángulo es " <<resultado<<endl;
return 0;
}