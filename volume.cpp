#include <iostream>

using namespace std;

int main()
{
    float base, altura, profun, volume;
    
    cout<< "Valor da base..:";
    cin>> base;
    cout<< "Valor da altura..:";
    cin>> altura;
    cout<< "Valor da profun..:";
    cin>> profun;
    
    volume = (base*altura*profun);
    
    cout<< "O volume do paralelepípedo é de ..:" << volume;
    

    return 0;
}
