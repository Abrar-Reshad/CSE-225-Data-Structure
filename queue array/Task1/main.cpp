#include <iostream>
#include "queType.h"
#include "queType.cpp"

using namespace std;

int main()
{

   QueType<int> ob1(5);
   bool f= ob1.IsEmpty();
   if(f)
    cout<<"Queue is Empty";
   else
    cout<<"Queue is not Empty";
   cout<<endl;
   ob1.Enqueue(5);
   ob1.Enqueue(7);
   ob1.Enqueue(4);
   ob1.Enqueue(2);
   f=ob1.IsEmpty();
   if(f)
    cout<<"Queue is Empty";
   else
    cout<<"Queue is not Empty";
   cout<<endl;
   f=ob1.IsFull();
    if(f)
    cout<<"Queue is full";
   else
    cout<<"Queue is not full";
   cout<<endl;
   ob1.Enqueue(6);
   QueType<int>ob2=ob1;
   for(int i=0;i<5;i++)
   {
       int temp;
       ob2.Dequeue(temp);
       cout<<temp<<" ";
   }
   cout<<endl;
   f=ob1.IsFull();
    if(f)
    cout<<"Queue is full";
   else
    cout<<"Queue is not full";
   cout<<endl;

   try{
    ob1.Enqueue(8);
   }catch(FullQueue ex){
        cout<<"Queue Overflow"<<endl;
   }

   int temp;
   ob1.Dequeue(temp);
   ob1.Dequeue(temp);
   QueType<int>ob3=ob1;
   for(int i=0;i<3;i++)
   {
       int temp;
       ob3.Dequeue(temp);
       cout<<temp<<" ";
   }
   cout<<endl;
   ob1.Dequeue(temp);
   ob1.Dequeue(temp);
   ob1.Dequeue(temp);
    f=ob1.IsEmpty();
   if(f)
    cout<<"Queue is Empty";
   else
    cout<<"Queue is not Empty";
   cout<<endl;


   try{
    ob1.Dequeue(temp);
   }catch(EmptyQueue ex){
        cout<<"Queue Underflow"<<endl;
   }

    QueType<string>ob4;
    int n;
    string tmp;
    cout<<"Enter the value ";
    cin>>n;
    ob4.Enqueue("1");
   while(n--)
    {
         ob4.Dequeue(tmp);
       cout<<tmp;
       cout<<endl;
       ob4.Enqueue(tmp.append("0"));
       ob4.Enqueue(tmp.append("1"));
    }
    return 0;
}
