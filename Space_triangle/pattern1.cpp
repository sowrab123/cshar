#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
while(1){
    int n, col, row;
    cout<<"Enter Number : ";
    cin>>n;
    for (row = 1; row <= n; row++)
    {

        ///spacing
        for (col = 1; col <= n-row; col++)
        {
            cout<< " ";
        }
        ///number
        for (col = 1; col <= row; col++)
        {
            cout<<char(col+64) ;//col
        }
        cout<< endl;
    }
}

    getch();
}
