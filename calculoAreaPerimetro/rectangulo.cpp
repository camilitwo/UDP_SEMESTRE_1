#include <iostream>
#include <cstdlib>
using namespace std;

int main(){

    int lado1, lado2, area;
    cout<<"Calculo área de un rectangulo\n";
    cout<<"Ingrese un lado a del rectangulo en cm.\n";
    cin >> lado1;

    cout<<"Ingrese un lado b del rectangulo en cm.\n";
    cin >> lado2;

    area = lado1*lado2;

    cout<<"El área corresponde a: "<<area<<" cm.\n";
    cout<<"El perímetro corresponde a: "<<lado1*2+lado2*2<<" cm. \n";

    system("pause");

    return 0;
}