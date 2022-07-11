#include<bits/stdc++.h>

using namespace std;

void print( int n ) 
{   
    static int i  = 1; 
    
    if( n  >= i )
    {
        cout<< i<< endl ;
        ++i;
        print(n);
    }
}

int main()
{
    int number ;

    cin >> number ;

    print( number);
}