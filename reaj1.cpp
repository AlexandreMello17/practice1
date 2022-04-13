#include <iostream>

using namespace std;

int main()
{
    float sal, reaj, nsal;
    
    cout<< "Digite seu salário..: ";
    cin>> sal;
    
    reaj = (sal*0.3);
    nsal = sal+reaj;
    
    if (sal > 500) {cout<< "Você não tem direito ao reajuste."; }
    
    cout<< "Total do aumento..: " <<reaj <<endl;
    
    cout<< "Novo valor do salário..: " <<nsal;

    return 0;
}
