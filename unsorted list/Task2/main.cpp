#include <iostream>
#include"studentInfo.h"

using namespace std;

int main()
{
    int i;
    array a;

    a.insert(15234, "Jon", 2.6);
    a.insert(13732, "Tyrion", 3.9);
    a.insert(13569, "Sandor", 1.2);
    a.insert(15467, "Ramsey", 3.1);
    a.insert(16285, "Arya", 3.1);



    a.deletee(15467);
    a.retrieve(13569);

    cout<<endl<<"Printing the list"<<endl;
     for(i=0;i<a.capacity;i++)
    {
        a.print(i);
    }















    return 0;
}
