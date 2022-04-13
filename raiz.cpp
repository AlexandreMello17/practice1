#include <cmath>
#include <math.h>
#include <iostream>

using namespace std;

int main()
{
    double n1, n2, choose, pr, seg1, seg2, ter1, ter2;
    
    cout<< "Digite um número..: ";
    cin>> n1;
    cout<< "Digite um segundo número..: ";
    cin>> n2;
    
    cout<< "Escolha uma das seguintes opções..: 1, 2 ou 3. " <<endl;
    cout<< "1- O primeiro número elevado ao segundo número." <<endl;
    cout<< "2- Raiz quadrada de ambos os números digitados." <<endl;
    cout<< "3- Raiz cúbica de ambos os númeoros digitados." <<endl;
    cout<< "Escolha uma operação à ser realizada..: ";
    cin>> choose;
    
    if (choose < 1 or choose > 3) { cout<< "Escolha inválida."; }
    
    pr = pow (n1,n2);
    seg1 = sqrt (n1);
    seg2 = sqrt (n2);
    ter1 = cbrt (n1);
    ter2 = cbrt (n2);
    
    if (choose == 1) {cout<< "Resultado da operação..: " <<pr; }
    if (choose == 2) {cout<< "Resultado da primeira operação..: " <<seg1<< endl; }
    if (choose == 2) {cout<< "Resultado da segunda operação..: " <<seg2<< endl; }
    if (choose == 3) {cout<< "Resultado da primeira operação..: " <<ter1<< endl; }
    if (choose == 3) {cout<< "Resultado da segunda operação..: "<<ter2<< endl; }
    
