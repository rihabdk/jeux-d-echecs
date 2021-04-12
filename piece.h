#ifndef PIECE_H
#define PIECE_H


class piece
{
    public:
        piece(int,int,int);
        virtual ~piece();

    protected:

    private:
        int color;
        int posx,posy;
};

#endif // PION_H
