#include<bits/stdc++.h>

using namespace std;

long long fib(int n)
{
    if( n == 1  )
    {
        return 0;
    }
    else if( n == 2 )
    {
        return 1;
    }
    else{
        return fib(n-1) + fib(n-2);
    }
}

int main()
{
    int number ;

    cin >> number ;

    cout<<fib(number);
}