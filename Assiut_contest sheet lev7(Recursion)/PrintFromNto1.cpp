#include<bits/stdc++.h>

using namespace std;

void print( int n )
{   
    static int flag = 0 ;
    if( n >= 1)
    {   
        if( flag )
        {
            cout<< " ";
        }
        flag = 1 ;
        cout<< n ;
        print(--n);
    }
}

int main()
{
    int number ;

    cin >> number ;

    print(number);
}