#include<iostream>
#include"dynArr.h"

using namespace std;

dynarr::dynarr(){

    size=0;
    arr=NULL;
}

dynarr::dynarr(int s)
{
    size=s;
    arr = new int[s];
}

dynarr::~dynarr()
{
    delete[] arr;
}

void dynarr::getvalue(int index)
{
    cout<<arr[index]<<" ";
}

void dynarr::setvalue(int index,int value)
{
    arr[index] = value;
}



