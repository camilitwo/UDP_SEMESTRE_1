#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

bool EsUnNumero(const char* cadena)
{
  for( ; *cadena; ++cadena )
  {
    // En cuanto un caracter no sea numérico
    if( !std::isdigit(*cadena) )
      return false;
  }

  return true;
}

string upperString(string text){
    std::transform(text.begin(), text.end(),text.begin(), ::toupper);

    return text;
}

void calculo(const char* cadena)
{
  int cero = 0;
  int par = 0;
  int impar = 0;  
  for( ; *cadena; ++cadena )
  {
    // En cuanto un caracter no sea numérico
    if( *cadena == '0'){
        cero++;
    }else if(*cadena % 2 == 0){
        par++;
    }else{
        impar++;
    }      
  }
  std::cout << "El numero: "<<cadena<<" contiene "<<par<<" numeros par, " << impar <<" numeros impar y " <<cero << " digitos cero"<< std::endl;
}

int main(){
    bool band = true;
    
    
    char numero[] = "";
    string opt = "";
    do{
        system("clear");
        cout << "\tCaso 3" << endl;
        do{
            
            cout << "Ingrese un número" << endl;
            cin >> numero;
            band = true;
            if(!EsUnNumero(numero)){
                system("clear");
                std::cout << "---------------------------"<<endl;
                std::cout << "Ingrese un numero válido" << std::endl;
                std::cout << "---------------------------" << std::endl;
                band = false;
            }
        }while(!band);
        int numeroEntero = stoi(numero);
        
        int x = 1;
        int suma = 0;
        

        calculo(numero);
        

        std::cout << "\n¿Desea evaluar otro numero?" << std::endl;
        std::cout << "[SI] Continuar evaluando" << std::endl;
        std::cout << "[NO] Terminar Ejecución" << std::endl;
        cin >> opt;
    }while(upperString(opt) == "SI");




    cin.ignore();
    return 0;
}