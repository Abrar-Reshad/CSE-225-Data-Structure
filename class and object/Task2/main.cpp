#include <iostream>
#include"dynarr.h"

using namespace std;

int main()
{
    int i,value,n;
    dynarr a();
    dynarr b(5);



    for(i=0;i<5;i++)
    {
        cout<<"Enter Values: ";
        cin>>value;
        b.setvalue(i,value);
    }


    cout<<"Enter new Size for array: ";
    cin>>n;
    b.allocate(n);




    return 0;
}
