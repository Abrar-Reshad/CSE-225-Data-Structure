#include <iostream>
#include "UnsortedType.cpp"
#include "UnsortedType.h"

using namespace std;

int main()

{

    UnsortedType<int>ob1;
    UnsortedType<int>ob2;
    UnsortedType<int>ob3;

    int m, n;

    cout<<"(m is the number of elements in the first sequence)"<<endl;
    cout<<"Enter the value of m: ";

    cin>>m;

    cout<<"(n is the number of elements in the second sequence) "<<endl;
    cout<<"Enter the value of n: ";

    cin>>n;



    cout<<"ALL the input values should be in ascending order"<<endl;
    cout<<"Enter values for the first sequence : ";

    for(int i=0; i<m; i++)

    {

        int temp;

        cin>>temp;

        ob1.InsertItem(temp);
    }
    cout<<endl;

//taking input for the second list
    cout<<"Enter values for the second sequence : ";
    for(int i=0; i<n; i++)
    {
        int temp;
        cin>>temp;
        ob2.InsertItem(temp);
    }


    cout<<endl;


    int arr[m+n];
    int small;

    int temp1,temp2,item1,item2;



    for(int j=0; j<m; j++)
    {
        ob1.GetNextItem(temp1);
        arr[j]=temp1;
    }
    for(int k=m; k<m+n; k++)
    {
        ob2.GetNextItem(temp1);
        arr[k]=temp1;
    }

    for(int i=0;i<m+n;i++)
    {
        for(int j=i+1;j<(m+n);j++)
        {
            if(arr[j]>arr[i])
            {
                temp2=arr[i];
                arr[i]=arr[j];
                arr[j]=temp2;
            }
        }
    }

    for(int i=0;i<m+n;i++)
    {
        ob3.InsertItem(arr[i]);
    }

    for(int i=0;i<ob3.LengthIs();i++)
    {
        ob3.GetNextItem(item1);
        cout<<item1<<" ";
    }





    return 0;
}


