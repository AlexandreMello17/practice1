#include <iostream>

using namespace std;

int main()
{
    float nota1, nota2, nota3, nota4, media;
    
    cout<< "Insira sua primeira nota..:";
    cin>> nota1;
    cout<< "Insira sua segunda nota..:";
    cin>> nota2;
    cout<< "Insira sua terceira nota..:";
    cin>> nota3;
    cout<< "Insira sua quarta nota..:";
    cin>> nota4;
    
    media = (nota1+nota2+nota3+nota4)/4;
    
    cout<< "Sua média foi de..:" <<media <<endl;
    
    if (media>=7) { cout<< "Você foi aprovado!!."; }
    
    else { cout<< "Você foi reprovado!!."; }
       
        

    return 0;
}
