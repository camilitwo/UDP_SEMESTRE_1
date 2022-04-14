#include <iostream>
//#include <limits>
using namespace std;

const short oct93 = 1089;
const short oct95 = 1157;
const short oct97 = 1198;

int main()
{
    double venta = 0;
    double litros = 0;
    short tipoCombustible = 0;

    cout << "\tCalculo Combustible PerTej\t\n" << endl;
    cout << "Ingrese el tipo de combustible a cargar" << endl;
    cout << "[1] 93 Octanos" << endl;
    cout << "[2] 95 Octanos" << endl;
    cout << "[3] 97 Octanos" << endl;
    cin >> tipoCombustible;
    cout << "\nIngrese la cantidad de litros a cargar" << endl;
    cin >> litros;
    

    if(tipoCombustible == 1){
        venta = litros * oct93;
    }
    else if(tipoCombustible == 2){
        venta = litros * oct95;
    }
    else if(tipoCombustible == 3){
        venta = litros * oct97;
    }else{
        std::cout << "No existe combustible" << std::endl;
        return -1;
    }

    cout << "\n\tResultado de la transacción"<< endl;
    cout << "Litros a cargar: "<< litros << endl;
    cout << "Venta Total: $"<< fixed << venta << endl<<endl;
    cin.ignore();
    cin.get();


    return 0;
}
