#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int x=3;

    int y=x++;

    cout<<"x= "<<x<<endl;
    cout<<"y= "<<y<<endl;

    y=x--;

    cout<<"x= "<<x<<endl;
    cout<<"y= "<<y<<endl;

     y=++x;

    cout<<"x1= "<<x<<endl;
    cout<<"y1= "<<y<<endl;

    y=--x;

    cout<<"x1= "<<x<<endl;
    cout<<"y1= "<<y;

    getch();
}
