#include <iostream>

using namespace std;

int main()
{
    float custTotal, ingr, qtdingr;
    
    cout<< "Valor total do espetáculo..:";
    cin>> custTotal;
    cout<< "Valor do Ingresso..:";
    cin>> ingr;
    
    qtdingr = custTotal/ingr;
    
    cout<< "Quantidade de ingressos a serem vendidos para cobrir o custo..:" << qtdingr;

    return 0;
}
