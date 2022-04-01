#include <iostream> 
using namespace std; 

int main ()
{
    
    cout << "Chequeo Gym UDP" << endl;
    int edad = 0;
    cout << "Ingrese su edad en años\n" << endl;
    cin >> edad;
    cout << "\nNumero de Pulsaciones cada 10 segundos: " << (220 - edad)/10<< endl;



    cout<<"\n\nPresiones enter para salir";
    cin.ignore();
    cin.get();
    return 0;
}