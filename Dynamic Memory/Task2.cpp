#include<iostream>

using namespace std;

int main(){
    int r,c,i,j;

    cout<<"Enter Row: ";
    cin>>r;
    cout<<"Enter  Coloum: ";
    cin>>c;


    char **a = new char*[r];

    for (i=0; i<r ; i++)
    {
        a[i] = new char[c];

    }
    j=0;
    for(i=0;i<r;i++)
    {
        cout<<"Enter Charecter String for row "<<i<<endl;
        cin>>a[i];
    }

    cout<<endl<<"Strings are: "<<endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++)
        {
            cout<<a[i][j];
        }
       cout<<endl;
    }


    for(i=0;i<r;i++)
    {
        delete[] a[i];
    }
    delete[] a;

    return 0;



}
