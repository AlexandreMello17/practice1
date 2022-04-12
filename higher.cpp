#include <iostream>

using namespace std;

int main()
{
    float n1, n2, n3;
    
    cout<< "Primeiro número..:";
    cin>> n1;
    cout<< "Segundo número..:";
    cin>> n2;
    cout<< "Terceiro número..:";
    cin>> n3;
    if (n1<n2 and n1<n3) {cout<< "Menor número..: " <<n1;}
    if (n2<n1 and n2<n3) {cout<< "Menor número..: "<< n2;}
    if (n3<n1 and n3<n2) {cout<< "Menor número..: " <<n3;}
    

    return 0;
}
