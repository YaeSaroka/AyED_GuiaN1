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

static string ArmarFecha(string fecha){
    string anio = fecha.substr(0, 4);  
    string mes  = fecha.substr(4, 2);   
    string dia  = fecha.substr(6, 2);  
    string fecha_final = anio+"/"+mes+"/"+dia;
    return fecha_final;
}

int main()
{
    int dia, mes, anio, fecha_ingresada;
    string vector_fecha[3];
    string separar="";
    fecha_ingresada=IngresarNroEntero();
    string fecha_string= to_string(fecha_ingresada);
    separar= ArmarFecha(fecha_string);
    cout<<"Su fecha es "<<separar<<endl;
    return 0;
}