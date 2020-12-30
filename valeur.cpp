#include "valeur.h"

valeur::valeur()
{
valx=0;
valy=0;
}

int valeur::positionx()
{
    return valx;
}

int valeur::positiony()
{
    return valy;
}

void valeur::augmentex(int a)
{
    a=a+20;
   valx=a;
}

void valeur::diminuex(int a)
{
    a=a-20;
   valx=a;
}


void valeur::augmentey(int a)
{
    a=a+20;
   valy=a;
}

void valeur::diminuey(int a)
{
    a=a-20;
   valy=a;
}

