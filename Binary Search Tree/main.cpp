#include <iostream>
#include"binarysearchtree.cpp"


using namespace std;

int main()
{
    TreeType<int> a;

    if(a.IsEmpty())
        cout<<"Tree is empty"<<endl;
    else
        cout<<"Tree is not empty"<<endl;

    a.InsertItem(4);
    a.InsertItem(9);
    a.InsertItem(2);
    a.InsertItem(7);
    a.InsertItem(3);
    a.InsertItem(11);
    a.InsertItem(17);
    a.InsertItem(0);
    a.InsertItem(5);
    a.InsertItem(1);

    if(a.IsEmpty())
        cout<<"Tree is empty"<<endl;
    else
         cout<<"Tree is not empty"<<endl;

    cout<<a.LengthIs()<<endl;

    int item = 9,item2 =13;
    bool found;

    a.RetrieveItem(item,found);
    if(found)
        cout<<"item is found"<<endl;
    else
        cout<<"item is not found"<<endl;

    a.RetrieveItem(item2,found);
    if(found)
        cout<<"item is found"<<endl;
    else
        cout<<"item is not found"<<endl;


    a.ResetTree(IN_ORDER);
    bool finish = false;

    while(!finish)
    {
        int value;
        a.GetNextItem(value,IN_ORDER,finish);
        cout<<value<<" ";
    }
    cout<<endl;

    a.ResetTree(PRE_ORDER);
    finish = false;

    while(!finish)
    {
        int value;
        a.GetNextItem(value,PRE_ORDER,finish);
        cout<<value<<" ";
    }
    cout<<endl;

    a.ResetTree(POST_ORDER);
    finish = false;

    while(!finish)
    {
        int value;
        a.GetNextItem(value,POST_ORDER,finish);
        cout<<value<<" ";
    }
    cout<<endl;


    a.MakeEmpty();


    return 0;
}
