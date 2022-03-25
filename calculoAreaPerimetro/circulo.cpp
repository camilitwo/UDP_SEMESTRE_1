#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

int main(){

    double radio;
    double pi = 3.14;
    cout<<"Calculo área de un circulo\n";
    cout<<"Ingrese el radio del circulo en cm.\n";
    cin >> radio;

    cout<<"El área corresponde a: "<<pi*pow(radio, 2)<<" cm.\n";
    cout<<"El perímetro corresponde a: "<<2*pi*radio<<" cm. \n";

    system("pause");

    return 0;
}