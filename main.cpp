#include <iostream>
#include "pion.h"
using namespace std;

int main()
{
    pion *p[8][8];

    for(int j=0 ; j<8;j++)
{
    p[2][j]=new pion(0,2,j); //creation des pions blancs
}
   for(int j=0 ; j<8;j++)
{
    p[7][j]=new pion(1,7,j); //creation des pions noires
}

    return 0;
}
