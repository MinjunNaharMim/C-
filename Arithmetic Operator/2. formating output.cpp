#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

int main()
{

  float num1,num2,sum,sub,mul,div,rem;

    cout<<"Enter 2 number: ";
    cin>> num1>>num2;

    cout<<showpoint;
    cout<< fixed;
    cout<< setprecision(2);

    sum=num1+num2;
    cout<< setw(30)<<"The sum is: "<< sum;

    cout<<endl;

    sub=num1-num2;
    cout<< setw(30)<< "The substraction is: "<< sub;

    cout<<endl;

    cout<<noshowpoint;

    mul=num1*num2;
    cout<< setw(30)<< "The multiplication is: "<< mul;

    cout<<endl;

    div=(float)num1/num2;
    cout<<  setw(30)<<"The Division is: "<< div;

    /*
        cout<<endl;

        rem=num1%num2;
        cout<< "The Remainder is: "<< rem;

        cout<<endl;

    */

    getch();
}



