#ifndef PION_H
#define PION_H


class pion
{
    public:
        pion(int,int,int);
        virtual ~pion();

    protected:

    private:
        int color;
        int posx,posy;
};

#endif // PION_H
