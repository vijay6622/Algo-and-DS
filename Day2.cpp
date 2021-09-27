#include<iostream.h>
#include<conio.h>
struct student
{
    int roll;
    float marks;
    student *next;
}

void main()
{
    student *a=new student;
    a->roll=101;
    a-.marks=75;
    cout<<a->roll<<a->marks;
}