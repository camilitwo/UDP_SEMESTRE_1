#include <iostream> 
using namespace std; 

int main ()
{
    
    cout << "Concierto Paul Mccartney" << endl;
    int hombres = 0;
    int mujeres = 0;
    cout << "Ingrese cantidad total de mujeres que asistieron al evento\n" << endl;
    cin >> mujeres;
    cout << "Ingrese cantidad total de hombres que asistieron al evento\n" << endl;
    cin >> hombres;

    int total = hombres + mujeres;

    double pMujer =  (mujeres*100)/total;
    double pHombre = (hombres*100)/ total;

    cout << "\nPorcentaje mujeres asistentes: " << pMujer <<"%"<< endl;
    cout << "\nPorcentaje hombres asistentes: " << pHombre <<"%"<< endl;

    if(total>0){
        if(pMujer>pHombre)
            cout << "Al evento asistieron mas mujeres que hombres" << endl;
        else
            cout << "Al evento asistieron mas hombres que mujeres" << endl;
    }else{
        cout << "No hubo participantes en el evento\n" << endl;
    }



    cout<<"\n\nPresiones enter para salir";
    cin.ignore();
    cin.get();
    return 0;
}