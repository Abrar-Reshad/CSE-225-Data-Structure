#include<iostream>
using namespace std;

int main(){

 int r,c,i,n,j;

 cout<<"Enter row and coloum: ";
 cin>>r>>c;

 int **arr = new int*[r];
 int arr2[30];


 for(i=0;i<r;i++)
 {
     arr[i] = new int [c];
 }

 for(i =0;i<r;i++)
 {
     cout<<"Enter how many element for row "<<i+1<<" :";
     cin>>arr2[i];
     for(j=0;j<arr2[i];j++)
     {

         cin>>arr[i][j];
     }

 }

 for(i =0;i<r;i++)
 {

     for(j=0;j<arr2[i];j++)
     {

        cout<<arr[i][j];
     }
     cout<<endl;

 }

 for(i=0;i<r;i++)
 {
     delete arr[i];
 }

 delete [] arr;

 return 0;



}
