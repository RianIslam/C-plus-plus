#include<iostream>
#include<conio.h>
using namespace std;

int main(){

int year ;

cout << "Enter any year" << endl;
cin >> year;

if(year%4==0 && year%100 != 0){
    cout << "Leap Year";
}

else if(year %400 == 0){
    cout <<  "Leap year";
}
else{
    cout<< "not Leap Year";

}

getch();


}
