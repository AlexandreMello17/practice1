#include <iostream>

using namespace std;

int main()
{
    float n1, n2, choose, st, nd, rd, th;
    
    cout<< "Primeiro número..: ";
    cin>> n1;
    cout<< "Segundo número..: ";
    cin>> n2;
    
    cout<< "Agora escolha a operação que deseja fazer..: 1, 2, 3 ou 4. " <<endl;
    cout<< "1- Média entre os dois números digitados." <<endl;
    cout<< "2- Diferença do maior pelo menor número." <<endl;
    cout<< "3- Produto entre os números digitados." <<endl;
    cout<< "4- Divisão do primeiro pelo segundo." <<endl;
    cout<< "Escolha uma opção..: ";
    cin>> choose;
    
    if (choose > 4 or choose < 1) {cout<< "Opção inválida."; }
    
    st = (n1+n2)/2;
    nd = (n1-n2);
    rd = (n1*n2);
    th = (n1/n2);
    
    if (choose == 1) {cout << "Resultado da operação..: " <<st; }
    if (choose == 2) {cout<< "Resultado da operação..: " <<nd; }
    if (choose == 3) {cout<< "Resultado da operação..: " <<rd; }
    if (choose == 4 and n2>0) {cout<< "Resultado da operação..: " <<th; }
    if (choose == 4 and n2<=0) {cout<< "Não é possível realizar divisão por 0."; }
    

    return 0;
}
