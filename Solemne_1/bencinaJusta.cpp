#include <iostream>
using namespace std;

int main(){

    
    bool band = true;
    int retorno = 0;
    do{
        system("clear");
        cout << "\t BENCINA JUSTA APP";
        cout << "\n Ingrese la cantidad de litros que hay cargado en su vehículo\n";
        float litroVehiculo =0;
        cin >> litroVehiculo;

        cout << "\n Ingrese la capacidad del estanque de su vehículo\n";
        float capacidad =0;
        cin >> capacidad;

        cout << "\n Ingrese el rendimiento de su vehículo\n";
        float rendimiento =0;
        cin >> rendimiento;

        cout << "\n Ingrese los KM a recorrer\n";
        float km =0;
        cin >> km;

        band = true;
        if(litroVehiculo < 0 ||
            capacidad < 1 ||
            rendimiento < 1 ||
            km < 1){
                std::cout << "Los valores ingresados no corresponden, favor reintentar" << std::endl;
                band = false;
                std::cout << "Presione enter para continuar" << std::endl;
                cin.ignore();
                cin.get();
        }else if(litroVehiculo>capacidad){
            std::cout << "La capacidad no puede ser menor a los litros en el vehiculo" << std::endl;
                band = false;
                std::cout << "Presione enter para continuar" << std::endl;
                cin.ignore();
                cin.get();
        }else{
        
            double val = litroVehiculo*rendimiento;
            double aux2 = 0;

            if(val > km){
                std::cout << "El vehículo para realizar el viaje indicado cuenta con bencina suficiente" << std::endl;
            }else{
                double recarga = km - val;
                double aux = 0;
                int i = 1;
                 aux2 = aux;
                if(recarga > (capacidad-litroVehiculo)){
                    aux = recarga / rendimiento;
                   
                    while(aux>(capacidad-litroVehiculo)){
                        aux = aux - capacidad;
                    }
                    std::cout << "Para realizar el viaje indicado, usted debe hacer " << i <<" recarga de "<< recarga<<" litros" << std::endl;
                    
                }else{
                    std::cout << "Para realizar el viaje indicado, usted debe hacer 1 recarga de "<< aux2 <<" litros" << std::endl;
                }
            }
        }


    }while(!band || retorno == 1);

    

    return 0;
}