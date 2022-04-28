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

void calculo()
{
    int x = 1;
    int numero = 0;
    bool band = true;
    int j = 1;
    int i = 0;
    while(j <= 1000){
        numero = j;
        x=1;
        i=0;
        while (x <= numero)
        {
            if(numero % x == 0){
                i++;
            }
            x++;
            
        }
        if(i==2)
                std::cout << numero << std::endl;
        j++;
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
        cout << "\tCaso 7" << endl;
        
        
        calculo();
        

        std::cout << "\n¿Desea evaluar otra vez?" << std::endl;
        std::cout << "[SI] Continuar evaluando" << std::endl;
        std::cout << "[NO] Terminar Ejecución" << std::endl;
        cin >> opt;
    } while (upperString(opt) == "SI");

    cin.ignore();
    return 0;
}