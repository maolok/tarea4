#include "functions.h"

int main()
{
    const int filas = 4;
    const int columnas = 4;
    int resultado[filas][columnas];
    int array1[filas][columnas];
    int array3[filas][columnas];
    int array2[filas][columnas] = {

                     {1,2,3,4},
                     {1,2,3,4},
                     {1,2,3,4},
                     {1,2,3,4}


                     };
    /*

    cout<<"INGRESE MATRIZ :"<<endl;
    datosarray1(*array1,filas,columnas);

    cout<<" MATRIZ INGRESADA :"<<endl;

    mostrararray(*array1,filas,columnas);

    cout<<" MATRIZ FIJA :"<<endl;

    mostrararray(*array2,filas,columnas);

    hadamard(*array1,*array2,*resultado,columnas,filas);

    */

    //aplicacion
    int filas1,columnas1;
    cout<<"INGRESE TAMAÑO DE LA MATRIZ AxA:"<<endl;
    cin>>filas1;

    columnas1 = filas1;

    cout<<"INGRESE MATRIZ 1 :"<<endl;

    datosarray1(*array1,filas1,columnas1);

    cout<<"INGRESE MATRIZ 2 :"<<endl;

    datosarray1(*array3,filas1,columnas1);

    cout<<" MATRIZ 1 :"<<endl;

    mostrararray(*array1,filas1,columnas1);

    cout<<" MATRIZ 2 :"<<endl;

    mostrararray(*array3,filas1,columnas1);

    hadamard(*array1,*array3,*resultado,columnas1,filas1);


    return 0;
}
