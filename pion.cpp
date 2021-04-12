#include <iostream>
#include <string>
using namespace std;
#include "pion.h"

pion::pion(int c,int x ,int y)
{
    color=c;
    posx=x;
    posy=y;
    if (c==0)
    cout << "pion blanc de position initiale"<<posx<<","<<posy <<endl ;
    if (c==1)
                cout << "pion noir de position initiale"<<posx<<","<<posy <<endl ;


}

pion::~pion()
{
    //dtor
}
