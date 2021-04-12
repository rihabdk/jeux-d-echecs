#include <iostream>
#include <string>
using namespace std;
#include "tour.h"

tour::tour(int c,int x ,int y)
{
    color=c;
    posx=x;
    posy=y;
    if (c==0)
    cout << "tour blanc de position initiale"<<posx<<","<<posy <<endl ;
    if (c==1)
                cout << "tour noir de position initiale"<<posx<<","<<posy <<endl ;


}

tour::~tour()
{
    //dtor
}
