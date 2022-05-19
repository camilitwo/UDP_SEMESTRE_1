#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    

    int arreglo[10];

    std::cout << "Generar arreglo de enteros" << std::endl;

    for (int i=0; i<10; i++) {
        system("clear");
        std::cout << "Ingrese un numero" << std::endl;
        cin >> arreglo[i];
    }
    system("clear");
    
    std::cout << "\nImpresión arreglo" << std::endl;
    long suma = 0;
    int max = 0;
    int aux = 0;
    for(int i = 0; i < 10; i++)
    {
        std::cout << "\nPosición: "<<i+1<<" Valor: "<<arreglo[i] << std::endl;
        suma += arreglo[i];

        max = arreglo[i];

        if (aux<max) {
            aux = max;
        }
    }

    std::cout << "\nSuma: " << suma<< std::endl;

    double prom = suma/10.00;

    std::cout << "Promedio: "<< prom << std::endl;
    std::cout << "Mayor: "<<aux << std::endl;
    
    cin.ignore();
    cin.get();
    return 0;


}
