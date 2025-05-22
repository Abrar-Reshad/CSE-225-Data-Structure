#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED


class dynarr{

    private:
          int size;
          int *arr;
    public:

        dynarr();
        dynarr(int);
        ~dynarr();
        void getvalue(int);
        void setvalue(int,int);



};



#endif // DYNARR_H_INCLUDED
