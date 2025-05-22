#include <iostream>
#include"dynarr.h"

using namespace std;

int main()
{
    int i,value;
    dynarr a();
    dynarr b(5);

    for(i=0;i<5;i++)
    {
        cout<<"Enter Values: ";
        cin>>value;
        b.setvalue(i,value);
    }
    cout<<endl<<"Values are: ";
    for(i=0;i<5;i++)
    {
        b.getvalue(i);
    }
    return 0;
}
