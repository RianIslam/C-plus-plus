#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int num,num1;
    cout << "enter 2 number" ;
    cin >> num >>num1;

    if(num > num1)
    {
        cout << "this is large :" << num;
    }
    else
    {
        cout << num1;
    }

    getch();

}
