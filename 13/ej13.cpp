#include <iostream>
#include <string>
using namespace std;

int main() {
unsigned long long total_granitos=0;

for (int i = 0; i < 64; i++)
{
    total_granitos += (1LL << i); //es igual a decir 2 elevado a la i
}
cout<<"La cantidad de granitos es de "<<total_granitos<<endl;

return 0;
}