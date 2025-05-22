#include <iostream>

using namespace std;

template <typename T>

class Point { // this is the required point function

private:

T x; // parameter representing the x and y

T y;

public:

Point(T x1,T y1){ // constructor

x=x1;

y=y1;

}

T getX(){ // setter and getter functions

return x;

}

void setX(T x1){

x = x1;

}

T getY(){

return y;

}

void setY(T y1){

y = y1;

}

void swap(Point& p2);



void print(){

cout<<"x: "<<x<<"\ny: "<<y<<endl;

}

};

template <typename T>

void Point<T> :: swap(Point<T>& p2){

T x1 = x;

T y1 = y;

setX(p2.x);

setY(p2.y);

p2.setX(x1);

p2.setY(y1);

}

int main(){



Point<float> p1(2.3,4.5); // testing the methods.

cout<<"P1: "<<endl;

p1.print();

Point<float> p2(5.2,3.5);

cout<<"P2: "<<endl;

p2.print();

p1.swap(p2);

cout<<"P1: "<<endl;

p1.print();

cout<<"P2: "<<endl;

p2.print();

return 0;

}

