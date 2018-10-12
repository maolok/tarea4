#include "functions.h"

void cronometro(Tiempo *datos)
{

    for(int j=datos->horas;j>=0;j--)
    {
       for(int k=datos->minutos;k>=0;k--)
        {



         for(int i=datos->segundos;i>=0;i--)
          {
            cout<<setfill('0')<<setw(2)<<j;
            cout<<":";
            cout<<setfill('0')<<setw(2)<<k;
            cout<<":";
            cout<<setfill('0')<<setw(2)<<i;

            datos->segundos = i;

            Sleep(1000);

            system("cls");


            }

       datos->segundos = 59;

          }

      datos->minutos = 59;
    }

    cout<<"CRONOMETRO COMPLETADO!"<<endl;

}



