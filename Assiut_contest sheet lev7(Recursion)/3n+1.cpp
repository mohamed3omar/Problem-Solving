#include<bits/stdc++.h>

using namespace std;

int process(long long n )
{
    static int counter = 0 ;

    counter++;

    if( n == 1 )
    {
        return 1;
    }
    if( n % 2 == 0)
    {
        process(n/2);
    }
    else{
        process(3*n+1);
    }
    return counter;

}
int main()
{
    long long number ;

    cin >> number ;

    cout<<process(number);
}