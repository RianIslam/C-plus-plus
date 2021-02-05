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

    hero.id =33434;
    hero.gpa= 4.55;
    hero.display();
getch();
}
