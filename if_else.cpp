#include<iostream>
#include<conio.h>

using namespace  std;

int main()
{
    int num;
    cout << "enter any integer :";
    cin >> num;

    if(num>0){
        cout << "positive" << endl;
    }
    else if(num < 0){
        cout << "Negative" << endl;

    }
    else if(num == 0){

        cout << "Zero";
    }



    getch();

}

