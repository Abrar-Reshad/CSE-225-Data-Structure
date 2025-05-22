#include <iostream>
#include "sortedtype.h"
#include "sortedtype.cpp"

using namespace std;

int main()
{
    SortedType<int> a;
    int i;
    cout<<a.LengthIs()<<endl;
    a.InsertItem(5);
    a.InsertItem(7);
    a.InsertItem(4);
    a.InsertItem(2);
    a.InsertItem(1);

    for(i = 0;i<a.LengthIs();i++)
    {
        int item;
        a.GetNextItem(item);
        cout<<item<<" ";
    }
    cout<<endl;
    bool found;
    int d1=6,d2=5;
    a.RetrieveItem(d1,found);

    if(found)
        cout<<"item is found"<<endl;
    else
        cout<<"item is not found"<<endl;

    a.RetrieveItem(d2,found);

    if(found)
        cout<<"item is found"<<endl;
    else
        cout<<"item is not found"<<endl;

    if(a.IsFull())
        cout<<"List is full"<<endl;
    else
        cout<<"List is not full"<<endl;

    a.DeleteItem(1);

    a.ResetList();
     for(i = 0;i<a.LengthIs();i++)
    {
        int item;
        a.GetNextItem(item);
        cout<<item<<" ";
    }
    cout<<endl;

    if(a.IsFull())
        cout<<"List is full"<<endl;
    else
        cout<<"List is not full"<<endl;


    return 0;
}
