#include "functions.h"

int main()
{
    int espacios;
    string frase,frasedecodificada,frasecodificada;

    cout<<"ingrese frase a codificar : "<<endl;
    getline(cin,frase);
    cout<<"ingrese espacios para codificacion:"<<endl;
    cin>>espacios;

    frasecodificada = codificacion(frase,espacios);

    cout<<"la frase codificada es : "<<frasecodificada<<endl;

    frasedecodificada = decodificacion(frasecodificada,espacios);

    cout<<"la frase decodificada es : "<<frasedecodificada<<endl;

    return 0;
}



