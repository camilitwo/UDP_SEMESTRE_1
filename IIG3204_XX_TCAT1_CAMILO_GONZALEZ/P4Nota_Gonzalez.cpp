#include <iostream> 
using namespace std; 

int main ()
{
    
    cout << "Promedio Notas" << endl;
    double notaParcial1 = 0;
    double notaParcial2 = 0;
    double notaParcial3 = 0;
    double notaExamen = 0;
    double notaTaller= 0;
    cout << "Ingrese Nota parcial 1\n" << endl;
    cin >> notaParcial1;
    cout << "Ingrese Nota parcial 2\n" << endl;
    cin >>  notaParcial2;
    cout << "Ingrese Nota parcial 3\n" << endl;
    cin >>  notaParcial3;
    cout << "Ingrese Nota Taller\n" << endl;
    cin >>  notaTaller;
    cout << "Ingrese Nota Examen\n" << endl;
    cin >>  notaExamen;

    double promedio = ((((
        notaParcial1+notaParcial2+notaParcial3)/3)*0.55) + 
                        (notaExamen * 0.3) + (notaTaller*0.15));

    
    cout << "\nPromedio general de Notas corresponde a: " <<promedio<< endl;


    cout<<"\n\nPresiones enter para salir";
    cin.ignore();
    cin.get();
    return 0;
}