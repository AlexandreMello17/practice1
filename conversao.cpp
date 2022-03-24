#include <iostream>

using namespace std;

int main()
{
    float tempF, conver;
    
    cout<< "Temperatura em Fahrenheit..:";
    cin>> tempF;
    
    conver = (tempF-32)/1.8;
    
    cout<< "Temperatura convertida para Celsius..:" << conver;

    return 0;
}
