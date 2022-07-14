#include<bits/stdc++.h>

using namespace std;

long long fact( int n)
{
    if( n > 1 )
    {
        return n * fact( n -1 );
    }
    else {
        return 1;
    }
}

int main()
{
    long long number ;

    cin >> number ;

    cout<<fact(number);
}