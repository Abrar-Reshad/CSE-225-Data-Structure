#include<iostream>
#include"studentInfo.h"

using namespace std;


array::array()
{
    length=0;
    capacity=5;
}

void array::insert(int i ,string n,double cg)
{
    data[length].id = i;
    data[length].name=n;
    data[length].cgpa=cg;
    length++;
}

void array::deletee(int id)
{
    int found=0;
    for(int i=0;i<capacity;i++)
    {
        if(data[i].id==id)
        {
             found=1;
             data[i]=data[capacity-1];
             capacity--;
             return;
        }
    }


}

void array:: retrieve(int id)
{
    int found=0;
    for(int i=0;i<capacity;i++)
    {
        if(data[i].id==id)
        {
             found=1;
             cout<<"item is found"<<endl;
             cout<<data[i].id<<" "<<data[i].name<<" "<<data[i].cgpa<<endl;
        }
    }
    if(found==0)
        {

            cout<<"item is not found";
        }

}

void array:: print(int index)
{
    cout<<data[index].id<<" "<<data[index].name<<" "<<data[index].cgpa<<endl;
}


