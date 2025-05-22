#include<iostream>

using namespace std;

int main()
{

    string month,m;
    int year,i;
    char ch;

    cout<<"Enter Month and Year:";
    cin>>month>>year;

    cout<<"You entered: "<<month<<endl;
    cout<<"Its Abbreviation is : ";


    for(i=0; i<3; i++)
    {
        ch = toupper(month[i]);
        cout<<ch;
        m[i]=ch;
    }
    cout<<endl;
    char a,b,c;
    a = m[0];
    b = m[1];
    c = m[2];



    if(a=='J')
        cout<<"This is the month number 1 of the year "<<year;
    else if(a=='F')
        cout<<"This is the month number 2 of the year "<<year;

    else if(a=='M'&&b=='A'&&c=='R')
        cout<<"This is the month number 3 of the year "<<year;

    else if(a=='A'&&b=='P')
        cout<<"This is the month number 4 of the year "<<year;

    else if(a=='M'&&b=='A'&&c=='Y')
        cout<<"This is the month number 5 of the year "<<year;

    else if(a=='J'&&b=='U'&&c=='N')
        cout<<"This is the month number 6 of the year "<<year;

    else if(a=='J'&&b=='U'&&c=='L')
        cout<<"This is the month number 7 of the year "<<year;

    else if(a=='A'&&b=='U')
        cout<<"This is the month number 8 of the year "<<year;

    else if(a=='S')
        cout<<"This is the month number 9 of the year "<<year;

    else if(a=='O')
        cout<<"This is the month number 10 of the year "<<year;

    else if(a=='N')
        cout<<"This is the month number 11 of the year "<<year;

    else if(a=='D')
        cout<<"This is the month number 12 of the year "<<year;



    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        cout << " which is a leap year.";
    }
    else
    {
        cout << " which is not a leap year.";
    }




}
