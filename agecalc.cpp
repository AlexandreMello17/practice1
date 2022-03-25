#include <iostream>

using namespace std;

int main()
{
    float an, aa, ano, mes, dias, sem, idade;
    
    cout<< "Digite seu ano de nascimento..:";
    cin>> an;
    cout<< "Agora, o ano atual..:";
    cin>> aa;
    
    idade = aa-an;
    mes = idade*12;
    dias = idade*365;
    sem = idade*52.143;
    
    cout<< "Sua idade é..:" << idade << endl;
    cout<< "Sua idade em meses..:" << mes << endl;
    cout<< "Sua idade em dias..:" << dias << endl;
    cout<< "Sua idade em semanas..:" << sem;
    
    

    return 0;
}
