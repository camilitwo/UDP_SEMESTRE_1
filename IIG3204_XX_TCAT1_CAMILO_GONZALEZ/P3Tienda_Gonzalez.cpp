#include <iostream> 
using namespace std; 

int main ()
{
    
    cout << "Descuento Tienda" << endl;
    double cuenta = 0;
    cout << "Ingrese el total de la compra en pesos Chilenos\n" << endl;
    cin >> cuenta;
    cout << "\nCuenta Inicial: $" << cuenta<< endl;

    if(cuenta >= 15000 && cuenta <= 40000){
        cout << "Descuento: $" <<cuenta*0.1<< endl;
        cout << "Total a pagar: $" <<cuenta*0.9<< endl;
    }else if(cuenta > 40000 && cuenta <= 90000){
        cout << "Descuento: $" <<cuenta*0.18<< endl;
        cout << "Total a pagar: $" <<cuenta*0.82<< endl;
    }else if(cuenta > 90000){
        cout << "Descuento: $" <<cuenta*0.25<< endl;
        cout << "Total a pagar: $" <<cuenta*0.75<< endl;
    }else{
        cout << "No hay Descuento" << endl;
    }



    cout<<"\n\nPresiones enter para salir";
    cin.ignore();
    cin.get();
    return 0;
}