#include <iostream>

using namespace std;

int main()
{
    float sal, reaj1, reaj2, nsal1, nsal2;
    
    cout<< "Digite seu salário..: ";
    cin>> sal;
    
    reaj1 = (sal*0.35);
    reaj2 = (sal*0.15);
    nsal1 = sal+reaj1;
    nsal2 = sal+reaj2;
    
    if (sal > 300) {cout<< "O seu salário reajustado é de..: " <<nsal2; }
    if (sal <= 300) {cout<< "O seu salário reajustado é de..: "<<nsal1; }
    
    
    return 0;
}
