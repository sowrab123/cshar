#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int row, col, n;

    cout<< "Enter Integer Number : ";
    cin>> n;

    for(row = 1; row <= n; row++){

        for(col = 1; col <= row; col++){

            cout<< " " << (col%2) ;

        };
        cout<<endl;
    };


    getch();
}
