#include <iostream>
//#include <limits>

using namespace std;

bool esMultiplo(int numero, int multiplo) {
    bool ret = false;

    if (numero % multiplo == 0) {
        ret = true;
    }

     return ret;
}

int esBisiesto(int anio){

    int cantDias = 28;

    if(esMultiplo(anio, 4) && !esMultiplo(anio, 100) || esMultiplo(anio, 400)){
        cantDias = 29;
    }

    return cantDias;
}

int main()
{
    
    int anio = 0;
    int mes = 0;
    string nombreMes = "";
    int cantDias = 0;

    std::cout << "\tFECHA\t" << std::endl;
    std::cout << "\nIngrese mes (##)"<< std::endl;
    cin >> mes;
    std::cout << "\nIngrese año (####)"<< std::endl;
    cin >> anio;


    if(anio<1900 || mes<1 || mes>12 ){
        std::cout << "[Error] datos no validos" << std::endl;
        return -1;
    }


    switch (mes)
    {
    case 1:
        nombreMes = "Enero";
        cantDias = 31;
        break;
    case 2:
        nombreMes = "Febrero";
        cantDias = esBisiesto(anio);
        break;
    case 3:
        nombreMes = "Marzo";
        cantDias = 31;
        break;
    case 4:
        nombreMes = "Abril";
        cantDias = 30;
        break;
    case 5:
        nombreMes = "Mayo";
        cantDias = 31;
        break;
    case 6:
        nombreMes = "Junio";
        cantDias = 30;
        break;
    case 7:
        nombreMes = "Julio";
        cantDias = 31;
        break;
    case 8:
        nombreMes = "Agosto";
        cantDias = 31;
        break;
    case 9:
        nombreMes = "Septiembre";
        cantDias = 30;
        break;
    case 10:
        nombreMes = "Octubre";
        cantDias = 31;
        break;
    case 11:
        nombreMes = "Noviembre";
        cantDias = 30;
        break;
    case 12:
        nombreMes = "Diciembre";
        cantDias = 31;
        break;
    default:
        std::cout << "No es posible entregar información ya que el mes "<<mes<<" no esta dentro del calendario" << std::endl;
        return -1;

    }

    std::cout << "\nEl mes "<<mes<<" ("<<nombreMes<<") del año "<<anio << " tiene " <<cantDias<<" días" << std::endl;
    cin.ignore();
    cin.get();


    return 0;
}
