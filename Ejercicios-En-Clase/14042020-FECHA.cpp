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
    int fecha;

    std::cout << "\tFECHA\t" << std::endl;
    std::cout << "\nIngrese fecha (YYYYMMDD)"<< std::endl;
    cin >> fecha;
    //cin >> mes;
    //std::cout << "\nIngrese año (####)"<< std::endl;
    // cin >> anio;
    fecha = fecha /100;
    mes = fecha %100;
    anio = fecha / 100;


    if(anio<1900 || mes<1 || mes>12 ){
        std::cout << "[Error] datos no validos" << std::endl;
        return -1;
    }

    if(mes == 1||
        mes == 3||
        mes == 5||
        mes == 7||
        mes == 8||
        mes ==10||
        mes == 12){
           cantDias = 31; 
    }else{
        cantDias = 30;
        if(mes ==2){
           cantDias = esBisiesto(anio);
        }
    }

    std::cout << "\nEl mes "<<mes<<" del año "<<anio << " tiene " <<cantDias<<" días" << std::endl;
    cin.ignore();
    cin.get();


    return 0;
}
