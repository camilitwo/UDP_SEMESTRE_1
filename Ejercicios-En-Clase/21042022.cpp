#include <iostream>
using namespace std;

/**
 * Camilo González
 * 21-04-2022
 * Switch
**/

int main(){
    char loop = 's';
    
    while (toupper(loop) == 'S')
    {
        bool a = false;
        system("clear");
        std::cout << "Ingrese el numero del dia [1] Lunes a [7] Domingo" << std::endl;
        short dia = 0;
        cin >> dia;
        std::cout << "\n";
        switch (dia)
        {
        case 1: case 2: case 3: case 4: case 5:
            std::cout << "Es entre semana" << std::endl;        
            break;
        case 6:
            std::cout << "Es día Sabado" << std::endl;
            break;
        case 7:
            std::cout << "Es día Domingo" << std::endl;
            break;
        default:
            std::cout << "Número día invalido, deber entre 1 y 7" << std::endl;
            break;
        }
        while(toupper(loop)!= 'N' && toupper(loop)!= 'S' || !a){
            
            std::cout << "Desea ingresar otra validación" << std::endl;
            std::cout << "[S] Si" << std::endl;
            std::cout << "[N] No" << std::endl;
            cin >> loop;
            a = true;
            system("clear");

        }
    }
    std::cout << "Finalizó correctamente el programa." << std::endl;
    return 0;
}