#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    while(true){


    int n, col, row;
    cout<< "Enter N : ";
    cin>> n;
    for (row = 1; row <= n; row++)
    {

        //Printing spaces
        for (col = 1; col <= n-row; col++)
        {

            cout<< "  ";

        };
        //Printing star
        for (col =1; col <= 2*row-1; col++){

            cout<< "* ";
        };
        cout<< endl;
    }

    ///Reverse Pyramid
        for (row = n-1; row >= 1; row--)
        {

        //Printing spaces
        for (col = 1; col <= n-row; col++)
        {

            cout<< "  ";

        };
        //Printing star
        for (col =1; col <= 2*row-1; col++){

            cout<< "* ";
        };
        cout<< endl;
    };

}//End while loop
    getch();
}

