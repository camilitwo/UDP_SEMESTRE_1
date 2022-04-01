#include <iostream> 
using namespace std; 

int main ()
{
    
    cout << "Promedio Ruta" << endl;
    double dia1 = 0;
    double dia2 = 0;
    double dia3 = 0;
    cout << "Ingrese Tiempo de ruta para el dia lunes en minutos\n" << endl;
    cin >> dia1;
    cout << "Ingrese Tiempo de ruta para el dia miercoles en minutos\n" << endl;
    cin >> dia2;
    cout << "Ingrese Tiempo de ruta para el dia viernes en minutos\n" << endl;
    cin >> dia3;

    double prom = (dia1+dia2+dia3)/3;
    cout << "\nEl tiempo promedio es de: " << prom <<" minutos"<< endl;



    cout<<"\n\nPresiones enter para salir";
    cin.ignore();
    cin.get();
    return 0;
}