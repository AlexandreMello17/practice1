#include <iostream>

using namespace std;

int main()
{
    float lados, nD;
    
    cout<< "Número de lados do polígono convexo para descobrir a quantidade de diagonais..:";
    cin>> lados;
    
    nD = (lados-3)*lados/2;
    
    cout<< "O número de diagonais desse polígono é..:" << nD;

    return 0;
}
