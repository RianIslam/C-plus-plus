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
void setValue(int x,double y){

    id = x;
    gpa = y;
}

};

int main(){
    Student alim,hero;
    alim.setValue(29,3.6);
    alim.display();
    hero.setValue(34,4.6);
    hero.display();
getch();
}
