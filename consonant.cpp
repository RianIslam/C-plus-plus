#include<iostream>
#include<conio.h>
using namespace std;

int main(){

    char ch;
    cout << "enter a letter" << endl;

    cin >> ch;

    if(ch=='a'||ch=='e'||ch=='i' ||ch=='o' ||ch=='u')
    {
        cout<< "vowel";
    }
    else{
        cout<< "consonant";
    }


}
