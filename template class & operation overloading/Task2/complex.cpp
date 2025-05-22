#include<iostream>
#include"complex.h"
using namespace std;

Complex::Complex()
{
    real=0;
    imag=0;
}

Complex::Complex(double r,double i)
{

    real=r;
    imag=i;
}

void Complex::display()
{
    cout<<real<<"+"<<imag<<"i"<<endl;
}


Complex Complex:: operator+(Complex c){
    Complex temp;
    temp.real=(real+c.real);
    temp.imag=(imag+c.imag);
    return temp;
}

Complex Complex:: operator*(Complex d){
    Complex temp;
    temp.real=(real*d.real)-(imag*d.imag);
    temp.imag=(real*d.imag)+(imag*d.real);
    return temp;
}

bool Complex:: operator !=(Complex e)
{
    return real!=e.real ;

}
