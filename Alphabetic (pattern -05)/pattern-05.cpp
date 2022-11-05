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

            cout<< " " << char(col+64) ;/// char(col+96) it's return small letter

        };
        cout<<endl;
    };


    getch();
}
