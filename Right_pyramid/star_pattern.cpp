#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    while (true)
    {
    
    int row, col, n;
    cout<<  "Enter N : ";
    cin>> n;
    for (row = 1; row <= n; row++){

        for(col = 1; col <= row; col++)
        {
            cout<< "* ";
        }
        cout << endl;
    }

    for (row = n-1; row >= 1; row--)
    {

        for (col = 1; col <= row; col++)
        {
            cout<< "* ";
        }
        cout<< endl;
    }

    }
    return 0;
    getch();
}