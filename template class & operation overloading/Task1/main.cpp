#include <iostream>
#include "dynarr.h"
#include "dynarr.cpp"
using namespace std;

int main()
{
    dynArr<int> a(5);

    for(int i=0;i<5;i++)
    {
        int value;
        cout<<"Enter value: ";
        cin>>value;
        a.setValue(i,value);
    }

    for(int i=0;i<5;i++)
    {
        cout<<a.getValue(i)<<" ";
    }
    return 0;
}
