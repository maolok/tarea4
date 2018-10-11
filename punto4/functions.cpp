#include "functions.h"

string codificacion(string frase, int espacios)
{

    int liminf = 96;
    int limsup = 122;
    int frasesize;

   frasesize = frase.length();
   char frasecodificada[frasesize];
   for(int i=0;i<frasesize;i++)
   {

       if (frase[i] != ' ')
       {

           if((frase[i] + espacios) > limsup)
           {

               int temp = (((frase[i] + espacios) - limsup) + liminf);
               frasecodificada[i]=temp;

           }
           else
           {
           frasecodificada[i] = (frase[i]+espacios);

           }
       }
       else if (frase[i] == ' ')
       {

            frasecodificada[i] = ' ';
       }




   }




   string frasecodificada1 = frasecodificada;
   frasecodificada1.resize(frasesize);

   return frasecodificada1;





}

string decodificacion(string frase,int espacios)
{
   int frasesize;
   int liminf = 97;
   frasesize = frase.length();
   char frasedecodificada[frasesize];
   for(int i=0;i<frasesize;i++)
   {

       if (frase[i] != ' ')
       {

           if((frase[i] - espacios) < liminf)
           {

               int temp = ((frase[i] - espacios) + 26);
               frasedecodificada[i]=temp;

           }
           else
           {
           frasedecodificada[i] = (frase[i] - espacios);

           }
       }
       else if (frase[i] == ' ')
       {

            frasedecodificada[i] = ' ';
       }



   }

   string frasedecodificada1 = frasedecodificada;
   frasedecodificada1.resize(frasesize);

   return frasedecodificada1;



}
