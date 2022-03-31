#include <iostream>
using namespace std;

float base;
float altura;
float resultado;
int opcion;

int main(){

    float base = 0;
    float altura= 0 ;
    float resultado = 0; 
    int opcion = 1;

    while (opcion == 1){       
        cout << "Calculo área y perimetro de Triangulo \n"<<endl;
        cout << "Ingrese la base del triangulo: "<<endl;
        cin >> base;
        cout << "Ingrese la altura del triangulo: "<<endl;
        cin >> altura;
        resultado=(base*altura)/2; 
        cout << "\nEl area de su triangulo es: " << resultado << endl;
        resultado = base + resultado + altura;
        cout << "El perimetro de su triangulo es: " << resultado << endl;
        cout << "\n**¿Desea calcular otro triangulo?**"<<endl;
        cout << "1. SI"<<endl;
        cout << "2. NO"<<endl;
        cin >> opcion;
    }

    cout<<"\n\nPresiones enter para salir";
    cin.ignore();
    cin.get();

}