#include <iostream>
#include <string>
using namespace std;

int main() {
float lado, perimetro, superficie;

    cout <<"Ingrese el valor del lado del cuadrado "<<endl;
    cin>> lado;
    perimetro= 4*lado;
    superficie= lado*lado;
    cout<< "El perímetro del cuadrado es " <<perimetro<< " y su superficie es " << superficie<< endl;
return 0;
}