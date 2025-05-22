#include "dynarr.h"
#include <iostream>

using namespace std;

template<class type>
dynArr<type>::dynArr(int s)
{
    data = new int[s];
    size = s;
}
template<class type>
dynArr<type>::~dynArr()
{
    delete [] data;
}
template<class type>
int dynArr<type>::getValue(int index)
{
    return data[index];
}
template<class type>
void dynArr<type>::setValue(int index, int value)
{
    data[index] = value;
}
