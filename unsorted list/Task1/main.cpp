#include <iostream>
#include "UnsortedType.h"
#include "UnsortedType.cpp"

using namespace std;


int main()
{
    int i;

    UnsortedType<int> a;

    a.InsertItem(5);
    a.InsertItem(7);
    a.InsertItem(6);
    a.InsertItem(9);

    for(i=0;i<a.LengthIs();i++)
    {
        int value;
        a.GetNextItem(value);
        cout<<value<<" ";
    }

    cout<<endl<<a.LengthIs()<<endl;

    a.InsertItem(1);
    a.ResetList();

    for(i=0;i<a.LengthIs();i++)
    {
        int value;
        a.GetNextItem(value);
        cout<<value<<" ";
    }
    cout<<endl;
    bool found;
    int test=4,test2=5,test3=9,test4=10;
    a.RetrieveItem(test,found);
    if(found)
        cout<<"Item is found "<<endl;
    else
        cout<<"Item is not found "<<endl;

    a.RetrieveItem(test2,found);
    if(found)
        cout<<"Item is found "<<endl;
    else
        cout<<"Item is not found "<<endl;

    a.RetrieveItem(test3,found);
    if(found)
        cout<<"Item is found "<<endl;
    else
        cout<<"Item is not found "<<endl;

    a.RetrieveItem(test4,found);
    if(found)
        cout<<"Item is found "<<endl;
    else
        cout<<"Item is not found "<<endl;

    if(a.IsFull())
        cout<<"List is Full"<<endl;
    else
        cout<<"List is not full"<<endl;


    a.DeleteItem(5);

    if(a.IsFull())
        cout<<"List is Full"<<endl;
    else
        cout<<"List is not full"<<endl;

    int dummy=1,dummy1=6;
    a.DeleteItem(1);
    a.ResetList();

    for(i=0;i<a.LengthIs();i++)
    {
        int value;
        a.GetNextItem(value);
        cout<<value<<" ";
    }

    cout<<endl;
     a.ResetList();
    a.DeleteItem(6);
    for(i=0;i<a.LengthIs();i++)
    {
        int value;
        a.GetNextItem(value);
        cout<<value<<" ";
    }



     return 0;
}
