#include<bits/stdc++.h>

using namespace std ;

long long logg(long long n )
{   
    static int counter = 0 ;

    if( n == 1 )
    {
        return 0;
    }

    counter++;

    logg(n/2);
    
    return counter; 

}

int main()
{
    long long number ;

    cin >> number ;

    cout<<logg(number);
}