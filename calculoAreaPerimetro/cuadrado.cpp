#include <iostream>
#include <cstdlib>
using namespace std;

int main(){

    int lado1, area;
    cout<<"Calculo área de un cuadrado\n";
    cout<<"Ingrese un lado del cuadrado en cm.\n";
    cin >> lado1;

    area = lado1*lado1;

    cout<<"El área corresponde a: "<<area<<" cm.\n";
    cout<<"El perímetro corresponde a: "<<lado1*4<<" cm. \n";

    system("pause");

    return 0;
}