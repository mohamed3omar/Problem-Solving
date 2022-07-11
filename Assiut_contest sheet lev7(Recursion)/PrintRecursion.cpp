#include<bits/stdc++.h>

using namespace std;

void print( int n )
{
    if( n > 0 )
    {
        cout<<"I love Recursion"<<endl;
        
        print(--n);
    }
}

int main()
{
    int number ;

    cin >> number ;

    print( number);
}