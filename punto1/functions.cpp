#include "functions.hpp"

void calcularunicos(int arreglo[],int size)
{

    int nunicos[size];

    int temp=0;

    int k=0;

    for (int x=0;x<size;x++)
    {
        nunicos[x]=0;
    }

    for (int j=0;j<size;j++)
    {
        int gate=0;
        for(int i=0;i<=j;i++)
        {
            if(nunicos[i]==arreglo[j])
            {
                gate=1;
                break;
            }
        }
        if(gate==0)
        {
            nunicos[k]=arreglo[j];

            k++;
        }


    }

    for(int h=0;h<size;h++)
    {

        if (nunicos[h] != 0)
        {
              temp++;

        }

    }

    int nunicos2[temp];
    for(int h=0;h<temp;h++)
    {

        nunicos2[h] = nunicos[h];

    }


    cout<<"arreglo ingresado: ";
    for(int h=0;h<size;h++)
    {

        cout<<arreglo[h]<<" ";

    }
    cout<<endl;
    cout<<"arreglo unico: ";
    for(int h=0;h<temp;h++)
    {

        cout<<nunicos2[h]<<" ";

    }

    cout<<endl;


}
