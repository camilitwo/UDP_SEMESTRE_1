#include<iostream>
#include<stdlib.h>
#include<string.h>


// Auto GMD   17.04   Constructora EAG

using namespace std;

int main(){
	
	// Variables

	string nombre = "Giselle";
	int jorlab=40, horaEx=0, horaExtra=0, cantSemanal=0, valorHora=0, total=0, pago=0, pagoExt=0, hheeExceso = 0, pagoExtExceso = 0; 
	
	// Ingreso datos
	
cout<<"\n\n Constructora EAG  \n\n";
cout<<"\n\n Calculo de pago de HHEE  \n\n";
cout<<"\n\n Ingrese total de horas trbajadas :   ";
cin>>cantSemanal;
if(cantSemanal>40){	
}else{
	cout<<"\n\n No correspode pago por HHEE    ";
	return -1;
}
cout<<"\n\n Ingrese su nombre :   ";
cin>>nombre; 	
cout<<"\n\n Ingrese el valor por hora  :   ";
cin>>valorHora;

//40 hrs
//8 1.6
// 2


	//Proceso
	
	if(cantSemanal<=jorlab){
	pago=cantSemanal*valorHora;
	}
	else if(cantSemanal<=48){
	horaExtra=cantSemanal-jorlab;
	pagoExt=(valorHora*1.6)*horaExtra;
	pago=valorHora*jorlab;
	}
	else{
	horaExtra=cantSemanal-jorlab;
    hheeExceso = horaExtra - 8;
    pagoExt=(valorHora*1.6)*horaExtra;
	pagoExtExceso = (valorHora*hheeExceso*2);
	pago=valorHora*jorlab;
	}
	
     
     // Exeso de hhee 
     horaExtra=cantSemanal-jorlab;
     if(horaExtra>18){
      horaEx=horaExtra-18;
     cout<<"\n\n .....Le han canelado "<<horaEx<< "horas de exeso";
	 }
	
	
	// Impresion por pantalla 
    cout<<"\n\n Pago semanal :  "<<pago;
    cout<<"\n\n Pago HHEE  :  "<<pagoExt;
    cout<<"\n\n Pago HHEE Exceso  :  "<<pagoExtExceso;
    cout<<"\n\n Pago total semanal :   " <<pago+pagoExt+pagoExtExceso<<endl<<endl;
	
	system("pause");
	return 0;
}