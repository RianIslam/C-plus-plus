#include<iostream>
#include<conio.h>
using namespace std;

class Student{
    public :
int id;
double gpa;
};

int main(){

Student Alim;
Alim.id = 199;
Alim.gpa = 3.33;

cout << Alim.id<< "  " << Alim.gpa <<endl;

Student halu;
halu.id = 199;
halu.gpa = 3.33;

cout << halu.id << "  " << halu.gpa;
getch();
}

