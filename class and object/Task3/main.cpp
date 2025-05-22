#include <iostream>
#include "dynarr.h"

using namespace std;

int main()
{
   int r,c,i,j,val;
   cout<<"Enter Row: ";
   cin>>r;
   cout<<"Enter Coloum: ";
   cin>>c;

   dynArr a(r,c);

   for(i = 0 ; i<r;i++)
   {

       for(j=0;j<c;j++)
       {

           cout<<"Enter Value:";
           cin>>val;
           a.setValue(i,j,val);
       }
   }

   for(i = 0 ; i<r;i++)
   {
       for(j=0;j<c;j++)
       {
           cout<<a.getValue(i,j)<<" ";

       }
       cout<<endl;
   }


    return 0;
}
