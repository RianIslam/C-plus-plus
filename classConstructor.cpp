#include<iostream>
#include<conio.h>
using namespace std;

class Student{
public:
int id;
double gpa;

void display()
{
    cout<< id << " " << gpa << endl;
}
Student(int x,double y)
{

    id =x;
    gpa = y;
}


};

int main()
{
    Student alim(199,3.34),hero(239,3.56);

    alim.display();
    hero.display();
    getch();
}
