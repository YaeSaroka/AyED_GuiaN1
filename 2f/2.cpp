#include <iostream>
#include <string>
using namespace std;

static int IngresarNroEntero()
{
    int numero;
    cout<<"Ingrese dia-mes-año"<<endl;
    cin>>numero;
    return numero;
}

static string ArmarFecha(int dia, int mes, int anio){
    string fecha= "";
    string day= to_string(dia);
    string month= to_string(mes);
    string year = to_string(anio);
    fecha =day+"/"+month+"/"+year;
    return fecha;
}

int main()
{
    int dia, mes, anio;
    string concatenar="";
    dia=IngresarNroEntero();
    mes=IngresarNroEntero();
    anio=IngresarNroEntero();
    concatenar= ArmarFecha(dia,mes,anio);
    cout<<"Su fecha es "<<concatenar<<endl;
    return 0;
}