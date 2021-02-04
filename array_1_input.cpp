#include<iostream>
#include<conio.h>
using namespace std;

int main(){

int marks[5];
for(int i = 0; i<5; i++){
    cout << "Marks for students " << i+1 << "=";
    cin >> marks[i];
}
cout << "Marks are : ";
for(int i=0; i<5;i++){
    cout << marks[i] << " ";

}

}
