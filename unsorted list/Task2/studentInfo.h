#ifndef DEMO_H_INCLUDED
#define DEMO_H_INCLUDED

using namespace std;

class studentinfo{

public:

    int id;
    string name;
    double cgpa;



};

class array{

public:
    array();
    studentinfo data [5];
    int length;
    int capacity;
    void insert(int,string,double);
    void deletee(int);
    void retrieve(int);
    void print(int);


};







#endif // DEMO_H_INCLUDED
