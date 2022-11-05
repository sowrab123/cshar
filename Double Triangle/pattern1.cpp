#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int col, row, n;
    cout<<"Enter Number : ";
    cin>> n;
    /*
    1
    1 2
    1 2 3
    */

    for (row = 1; row <= n; row++){
        for (col = 1; col <= row; col++){
            cout<< " "<<col;
        }
        cout<<endl;
    }
    /*
    1 2 3
    1 2
    1
    */

    for (row = (n-1); row >= 1; row--){
        for (col = 1; col <= row; col++){
            cout<<" "<<col;
        }
        cout<<endl;
    }

    getch();
}
