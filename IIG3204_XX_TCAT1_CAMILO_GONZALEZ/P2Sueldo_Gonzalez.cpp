#include <iostream> 
using namespace std; 

int main ()
{
    
    cout << "Remuneración vendedor" << endl;
    double sueldo = 0;
    cout << "Ingrese el sueldo base en pesos Chilenos\n" << endl;
    cin >> sueldo;
    cout << "\nSueldo: $" << sueldo<< endl;
    cout << "Comisiones: $" <<sueldo*(0.15*3)<< endl;
    cout << "Total: $" <<sueldo+(sueldo*(0.15*3))<< endl;



    cout<<"\n\nPresiones enter para salir";
    cin.ignore();
    cin.get();
    return 0;
}