#include <iostream>
//#include <limits>

using namespace std;

int main()
{
    
    double imeca1, imeca2, imeca3, gan1, gan2, gan3;

    std::cout << "\tIMECA\t" << std::endl;
    std::cout << "\n-- Día 1 --" << std::endl;
    std::cout << "\nIngrese Imeca" << std::endl;
    cin >> imeca1;
    std::cout << "\nIngrese Ganancia del día" << std::endl;
    cin >> gan1;
    std::cout << "\n-- Día 2 --" << std::endl;
    std::cout << "\nIngrese Imeca" << std::endl;
    cin >> imeca2;
    std::cout << "\nIngrese Ganancia del día" << std::endl;
    cin >> gan2;
    std::cout << "\n-- Día 3 --" << std::endl;
    std::cout << "\nIngrese Imeca" << std::endl;
    cin >> imeca3;
    std::cout << "\nIngrese Ganancia del día" << std::endl;
    cin >> gan3;


    double indice = (imeca1 + imeca2 + imeca3) /3;
    float dcto = 1;
    string calidad = "Satisfactoria";
    string notif = "Aprobación";

    if(indice > 300){
        dcto = 0.8;
        calidad = "Muy mala";
        notif = "Amonestación";
    }else if(indice > 200){
        dcto = 0.5;
        calidad = "Mala";
        notif = "Parte Judicial";
    }else if(dcto > 100){
        dcto = 0.1;
        calidad = "No Satisfactoria";
        notif = "Cierre Fabrica";
    }
    double ganancia = (gan1 + gan2 + gan3) ;
    double descuentoTotal = ganancia * dcto;

    std::cout << "\n\nGanancia acumuluda: $" << fixed <<ganancia << std::endl;
    std::cout << "Índice IMECA: "<< indice << std::endl;
    std::cout << "Calidad de aire: " << calidad << std::endl;
    std::cout << "Notificación: " << notif << std::endl;
    std::cout << "Valor Multa: $" << fixed << descuentoTotal << std::endl;

    cin.ignore();
    cin.get();


    return 0;
}
