#include<iostream>
#include<conio.h>
using namespace std;

class Student {
public:
int id;
double gpa;
void display(){
cout << id << " " << gpa<< endl;
}

};

int main(){
    Student alim,hero;
    alim.id = 333;
    alim.gpa = 3.345;
    alim.display();
getch();
}
