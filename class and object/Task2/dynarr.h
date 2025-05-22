#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED


class dynarr{



    public:
        int size;
          int *arr;

        dynarr();
        dynarr(int);
        ~dynarr();
        void getvalue(int);
        void setvalue(int,int);
        void allocate(int);



};



#endif // DYNARR_H_INCLUDED
