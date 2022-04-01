#include <iostream> 
using namespace std; 

int main ()
{
    
    cout << "Descuento Tienda" << endl;
    double cuenta = 0;
    cout << "Ingrese el total de la compra en pesos Chilenos\n" << endl;
    cin >> cuenta;
    cout << "\nCuenta Inicial: $" << cuenta<< endl;
    cout << "Descuento: $" <<cuenta*0.15<< endl;
    cout << "Total a pagar: $" <<cuenta*0.85<< endl;



    cout<<"\n\nPresiones enter para salir";
    cin.ignore();
    cin.get();
    return 0;
}