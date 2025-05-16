#include <iostream>
#include <string>
using namespace std;
static int VerificarYear(int year)
{
    while (year < 1582){
        cout<<"Ingrese nuevamente el año"<<endl;
        cin>>year;
    }
    return year;
}
static bool Bisiesto (int year)
{
    double divisible4 = year%4;
    double divisible100= year%100;
    double divisble400= year%400;
    bool esdivisble=false;
    if(divisible4==0)
    { 
        if(divisible100==0)
        {
            esdivisble=false;
        if(divisble400==0)
        {
            esdivisble=true;
        }
        }
        esdivisble=true;
    }
    return esdivisble;
}



int main() {
int year=0;
bool bisiesto=false;
cout<<"Ingrese un año"<<endl;
cin>>year;
year=VerificarYear(year);
bisiesto=Bisiesto(year);
if (bisiesto==true) cout<<"El año es bisiesto";
else cout<<"El año no es bisiesto";
return 0;

}
