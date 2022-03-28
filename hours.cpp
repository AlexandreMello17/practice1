#include <iostream>

using namespace std;

int main()
{
    float h, hmin, min, minTotal;
    
    cout<< "Digite às horas..:";
    cin>> h;
    cout<< "Digite os minutos..:";
    cin>> min;
    
    hmin = h*60 + min;
    
    if (min<0) { cout<< "Em minutos, insira apenas números entre 0 e 59.";}
    if (min>59) { cout<< "Em minutos, insira apenas números entre 0 e 59.";}
    if (min> 0 and min< 60) { cout<< "Horas apenas em minutos..:" << hmin;}
  
    
    
    
    
    

    return 0;
}
