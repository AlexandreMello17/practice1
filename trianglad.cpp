#include <iostream>

using namespace std;

int main()
{
    float pLado, sLado, tLado, calc;
    
    cout<< "Valor do primeiro ângulo do triângulo..:";
    cin>> pLado;
    cout<< "Valor do segundo ângulo do triângulo..:";
    cin>> sLado;
    
    calc = 180;
    tLado = 180 - pLado - sLado;
    
    cout<< "Valor do terceiro ângulo..:" << tLado;

    return 0;
}
