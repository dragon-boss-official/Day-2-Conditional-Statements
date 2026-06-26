#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter number from 1 to 100: ";
    cin>>num;
    if (num >= 90)
    {
        cout<<"Grade = O";
    }
    else if(num >= 80 )
    {
        cout<<"Grade = A";
    }
    else if(num >= 70 )
    {
        cout<<"Grade = B";
    }
    else if(num >= 60 )
    {
        cout<<"Grade = C";
    }
    else if(num >= 35 )
    {
        cout<<"Grade = D";
    }
    else
    {
        cout<<"Grade = F";
    }

    return 0;
}