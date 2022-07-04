#include<bits/stdc++.h>

using namespace std;

bool isprime( int num)
{
    int div  = num / 2 ;

    for (int i = 2; i <= div; i++)
    {
        if( num % i == 0 )
        {
            return false;
            break;
        }
    }
    return true;
    
}

int main()
{
    int tests, number ;

    cin >> tests;

    for (int i = 0; i < tests; i++)
    {
        cin>> number;

        bool result = isprime(number);

        if( result  && number != 1 && number != 0 && number > 0 )
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    
}