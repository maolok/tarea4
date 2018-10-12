#include "functions.h"

int main()
{
    Tiempo temporizador;

    cout<<"ingrese segundos del contador :"<<endl;
    cin>>temporizador.segundos;
    cout<<"ingrese minutos del contador :"<<endl;
    cin>>temporizador.minutos;
    cout<<"ingrese horas del contador :"<<endl;
    cin>>temporizador.horas;



    cronometro(&temporizador);



    return 0;
}



