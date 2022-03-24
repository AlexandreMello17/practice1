#include <iostream>

using namespace std;

int main()
{
    float num1, num2, divis;
    cout<<"Insira o primeiro número..:";
    cin>> num1;
    cout<< "Insira o segundo número..:";
    cin>> num2;
    
    divis = num1/num2;
    
    if (num2<1) { cout<< "Não é possível realizar a divisão..:";}
    if (num2>1) { cout<< "O resultado é igual à..:" <<divis ;}
    
    
    return 0;
}
