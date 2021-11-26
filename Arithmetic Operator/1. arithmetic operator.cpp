#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
  int num1,num2,sum,sub,mul,div,rem;

    cout<<"Enter 2 number: ";
    cin>> num1>>num2;

    sum=num1+num2;
    cout<< "The sum is: "<< sum;

    cout<<endl;

    sub=num1-num2;
    cout<< "The substraction is: "<< sub;

    cout<<endl;

    mul=num1*num2;
    cout<< "The multiplication is: "<< mul;

    cout<<endl;

    div=(float)num1/num2;
    cout<< "The Division is: "<< div;

    cout<<endl;

    rem=num1%num2;
    cout<< "The Remainder is: "<< rem;

    cout<<endl;

    getch();
}


