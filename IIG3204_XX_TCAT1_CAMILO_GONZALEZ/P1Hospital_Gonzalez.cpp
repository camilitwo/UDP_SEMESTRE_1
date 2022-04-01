#include <iostream> 
using namespace std; 

int main ()
{
    
    cout << "Presupuesto Anual" << endl;
    double presupuesto = 0;
    cout << "Ingrese el presupuesto total anual en pesos Chilenos\n" << endl;
    cin >> presupuesto;
    cout << "\nPresupuesto Anual por área" << endl;
    cout << "\nGinecología: $" << presupuesto * 0.15 << endl;
    cout << "Traumatología: $" <<presupuesto*0.2<< endl;
    cout << "Cardiología: $" <<presupuesto*0.28<< endl;
    cout << "Pediatría: $" << presupuesto * 0.22<< endl;



    cout<<"\n\nPresiones enter para salir";
    cin.ignore();
    cin.get();
    return 0;
}