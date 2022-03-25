#include <iostream>

using namespace std;

int main()
{
    float hTrab, hExt, salMin, salFinal;
    
    cout<< "Digite o salário mínimo..:";
    cin>> salMin;
    cout<< "Quantidade de horas trabalhadas..:";
    cin>> hTrab;
    cout<< "Quantidade de horas extras..:";
    cin>> hExt;
    
    hTrab = salMin/8;
    hExt = salMin/4;
    salFinal = salMin + hTrab + hExt;
    
    cout<< "Salário final à receber..:" << salFinal;
    
    
    return 0;
}
