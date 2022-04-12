#include <iostream>

using namespace std;

int main()
{
    
    float nota1, nota2, media;
    
    cout<<"Digite primeira nota..:";
    cin>> nota1;
    cout<< "Digite a segunda nota..:";
    cin>> nota2;
    
    media = (nota1+nota2)/2;
    
    if (media<3) { cout<< "Você foi reprovado..:";}
    if (media>=3 and media<=6) { cout<< "Qualificado para fazer outro exame.";}
    if (media>=7) {cout<< "Aprovado.";}
    
    
    return 0;
}
