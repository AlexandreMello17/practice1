#include <iostream>

using namespace std;

int main()
{
    float horas, minutos, hConv, minConv, secs;
    
    cout<< "Indique as horas..:";
    cin>> horas;
    cout<< "Indique os minutos..:";
    cin>> minutos;
    
    hConv = horas*60;
    minConv = minutos + hConv;
    secs = minConv*60;
    
    cout<< "Horas convertidas em minutos..:" << hConv << endl;
    cout<< "Total de minutos (incluindo os minutos indicados)..:" << minConv << endl;
    cout<< "Total dos minutos convertidos em segundos..:" << secs;
    

    return 0;
}
