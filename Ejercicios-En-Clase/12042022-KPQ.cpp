#include <iostream>
//#include <limits>
using namespace std;

const long sueldoBase = 380000;

int main()
{
    double venta = 0;
    double sueldoLiq = 0;
    string nombre = "";

    std::cout << "\tCalculo Renta KPQ\t\n" << std::endl;
    std::cout << "Ingrese el Nombre del trabajador" << std::endl;
    cin >> nombre;
    std::cout << "Ingrese el monto total vendido del trabajador" << std::endl;
    cin >> venta;
    

    if(venta > 2200000){
        venta = venta * (0.07 + 0.06);
    }else if(venta > 850000){
        venta = venta * (0.07 + 0.04);
    }else{
        venta =0;
    }

    sueldoLiq = (sueldoBase + venta) * 0.796;

    std::cout << "\n\tLiquidación de " << nombre 
    << std::endl;
    std::cout << "\nSueldo Líquido: $"<< fixed << sueldoLiq << std::endl<<endl;
    cin.ignore();
    cin.get();


    return 0;
}
