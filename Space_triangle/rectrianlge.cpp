#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n, col, row;
    cout<< "Enter Number : ";
    cin>> n;
    for (row = 1; row <= n; row++)
    {

        for (col = 1; col <= n; col++)
        {
            cout<< "*";

        };
        cout<<endl;
    };



    getch();
}
