#include <iostream>

using namespace std;

int main()
{
    float raio, area, pi;
    
    cout<< "Insira o raio do círculo para calcular a área..:";
    cin>> raio;
    
    pi = 3.14;
    area = (pi*raio*raio);
    
    cout<< "O valor da área do círculo é de..:" << area;
    

    return 0;
}
