#include <iostream>
#include <string>
using namespace std;
#include "piece.h"

piece::piece(int c,int x ,int y)
{
    color=c;
    posx=x;
    posy=y;
    if (c==0)
    cout << "piece blanc de position initiale"<<posx<<","<<posy <<endl ;
    if (c==1)
                cout << "piece noir de position initiale"<<posx<<","<<posy <<endl ;


}

piece::~piece()
{
    //dtor
}
