#include <iostream>
#include"complex.h"

using namespace std;

int main()
{
    Complex c1(2.0,6.0);
    Complex c2(2.0,4.0);
    Complex c3;

    c3 = c1 + c2;
    cout<<"Addition: ";
    c3.display();

    c3 = c1*c2;
    cout<<"Mul: ";
    c3.display();

    if(c1!=c2)
        cout<<"C1 and c2 not equal";
    else
        cout<<"Equal";

    return 0;
}
