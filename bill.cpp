
#include <iostream>

using namespace std;

int main()
{
    float salMin, kw, kwcons, vlrTotal, vlrDesc, vlrTotDesc;
    
    cout<< "Digite o valor do salário mínimo..:";
    cin>> salMin;
    cout<< "Quantidade de quilowatts consumidos..:";
    cin>> kwcons;
    
    kw = salMin/5;
    vlrTotal = kw*kwcons;
    vlrDesc = vlrTotal*0.15;
    vlrTotDesc = vlrTotal - vlrDesc;
    
    cout<< "Valor de cada Quilowatt..:" << kw << endl;
    cout<< "Valor total a ser pago..:" << vlrTotal << endl;
    cout<< "Valor do desconto..:" << vlrDesc << endl;
    cout<< "Valor total com o desconto..:" << vlrTotDesc;
    

    return 0;
}
