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

void dynarr::allocate(int n)
{
    if(n!=size)
    {
        int i;
        int* arr2 = new int[n];
        for(i=0;arr[i]!=NULL;i++)
        {
            arr2[i]=arr[i];
        }
        delete[] arr;
        arr = arr2;
        size = n;
        arr2 = NULL;

    }
}



