#include <iostream>

using namespace std;

int main()
{
    float real, dol, mA, lE;
    
    cout<< "Valor em reais..:";
    cin>> real;
    
    dol = real*1.80;
    mA = real*2;
    lE = real*3.57;
    
    cout<< "Valor convertido para dólares..:" << dol << endl;
    cout<< "Valor convertido para Marco Alemão..:" << mA << endl;
    cout<< "Valor convertido para Libras Esterlinas..:" << lE;

    return 0;
}
