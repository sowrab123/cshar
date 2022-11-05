#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
while(1){
    int n, col, row;
    cout<<"Enter Number : ";
    cin>>n;
    for (row = n; row >= 1; row--)
    {

        ///spacing
        for (col = 1; col <= n-row; col++)
        {
            cout<< " ";
        }
        ///number
        for (col = 1; col <= row; col++)
        {
            cout<<"*" ;//col
        }
        cout<< endl;
    }



}

    getch();
}
