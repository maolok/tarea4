#include "functions.hpp"

int main()
{

    int size;
    cout<<"ingrese tamaño del arreglo :"<<endl;
    cin>>size;

    int *arreglo = new int [size];


    for(int i=0;i<size;i++)
    {

        cout<<"ingrese dato "<<i+1<<"del arreglo"<<endl;
        cin>>arreglo[i];

    }

    calcularunicos(arreglo,size);

    delete[] arreglo;

    arreglo = nullptr;



}
