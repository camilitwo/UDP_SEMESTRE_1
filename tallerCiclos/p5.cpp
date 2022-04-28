#include <iostream>
#include <string.h>
#include <algorithm>
#include <ctype.h>
using namespace std;

string upperString(string text)
{
    std::transform(text.begin(), text.end(), text.begin(), ::toupper);

    return text;
}

int main()
{
    bool band = true;

    int numero = 0;
    int numero2 = 0;
    string opt = "";
    do
    {
        system("clear");
        cout << "\tCaso 5" << endl;
        cout << "Ingrese un número A" << endl;
        cin >> numero;
        cout << "Ingrese un número B" << endl;
        cin >> numero2;
        band = true;
        int numeroEntero = numero;
        int numeroEntero2 = numero2;

        int x = 1;
        int suma = 0;
        int suma2 = 0;
        while (x < numeroEntero)
        {
            if(numeroEntero % x == 0){
                suma = suma + x;
            }
            x++;
        }
        x = 1;
        while (x < numeroEntero2)
        {
            if(numeroEntero2 % x == 0){
                suma2 = suma2 + x;
            }
            x++;
        }
        
        if (suma == numeroEntero2 && suma2 == numeroEntero)
        {
            std::cout << "El numero: " << numero << " es amigo del numero " << numero2 << std::endl;
        }
        else
        {
            std::cout << "El numero: " << numero << " no es amigo del numero " << numero2 << std::endl;
        }

        std::cout << "\n¿Desea evaluar otro numero?" << std::endl;
        std::cout << "[SI] Continuar evaluando" << std::endl;
        std::cout << "[NO] Terminar Ejecución" << std::endl;
        cin >> opt;
    } while (upperString(opt) == "SI");

    cin.ignore();
    return 0;
}