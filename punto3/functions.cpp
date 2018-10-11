#include "functions.h"

void datosarray1(int *array1 ,int filas,int comlunas)
{

    int i,k;
    for (i=0;i<comlunas;i++)
    {

        for(k=0;k<filas;k++)
        {

            cout<<"ingrese datos fila "<<k<<" columna "<<i<<endl;
            cin>>*array1;

            array1++;



        }



    }


}

void mostrararray( int *array1, int filas, int columnas)
{

    int i,k;
    for (i=0;i<columnas;i++)
    {

        for(k=0;k<filas;k++)
        {


            cout<<*array1<<"    ";
            array1++;

        }

         cout<<endl;

    }


}

 void hadamard(int *array1,int *array2, int *resultado1, int filas, int columnas)
{

    cout<<"RESULTADO HADAMARD : "<<endl;
    int i,k;
    for (i=0;i<columnas;i++)
    {

        for(k=0;k<filas;k++)
        {

            *resultado1 = ((*array1)*(*array2));


            cout<<*resultado1<<"   ";




            array1++;
            array2++;

        }

        cout<<endl;

    }



}
