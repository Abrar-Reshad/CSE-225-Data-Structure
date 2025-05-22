#include "dynarr.h"
#include <iostream>
using namespace std;

dynArr::dynArr()
{
    data = NULL;
    size = 0;
}
dynArr::dynArr(int r,int c)
{
    data = new int*[r];

    for(int i=0;i<r;i++)
    {
        data[i] = new int[c];
    }
}
dynArr::~dynArr()
{
    for(int i =0;i<r;i++)
    {
        delete[] data[i];
    }

    delete [] data;
}
int dynArr::getValue(int index,int index2)
{
    return data[index][index2];
}
void dynArr::setValue(int index,int index2, int value)
{

    data[index][index2] = value;
}
