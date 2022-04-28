#include <iostream>
#include <string.h>
#include <algorithm>
#include <string>
using namespace std;

bool EsUnNumero(const char *cadena)
{
    for (; *cadena; ++cadena)
    {
        // En cuanto un caracter no sea numérico
        if (!std::isdigit(*cadena))
            return false;
    }

    return true;
}

string upperString(string text)
{
    std::transform(text.begin(), text.end(), text.begin(), ::toupper);

    return text;
}

void calculo(int numero)
{
    int x = 1;
    bool band = true;
    while (x < numero)
    {
        if(x!=1 && x!=numero && numero % x == 0){
           std::cout << "El numero: " << numero << " no es primo " << std::endl;
           band = false;
           break;
        }

        x++;
    }

    if(band){
        std::cout << "El numero: " << numero << " es primo " << std::endl;
    }
}

int main()
{
    bool band = true;

    char numero[] = "";
    string opt = "";
    do
    {
        system("clear");
        cout << "\tCaso 4" << endl;
        do
        {

            cout << "Ingrese un número" << endl;
            cin >> numero;
            band = true;
            if (!EsUnNumero(numero))
            {
                system("clear");
                std::cout << "---------------------------" << endl;
                std::cout << "Ingrese un numero válido" << std::endl;
                std::cout << "---------------------------" << std::endl;
                band = false;
            }
        } while (!band);
        int numeroEntero = stoi(numero);
        
        calculo(numeroEntero);
        

        std::cout << "\n¿Desea evaluar otro numero?" << std::endl;
        std::cout << "[SI] Continuar evaluando" << std::endl;
        std::cout << "[NO] Terminar Ejecución" << std::endl;
        cin >> opt;
    } while (upperString(opt) == "SI");

    cin.ignore();
    return 0;
}