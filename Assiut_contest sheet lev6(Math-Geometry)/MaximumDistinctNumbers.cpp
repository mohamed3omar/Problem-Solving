#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long number ;

    cin >> number ;

    // example 8 7 5 2
    //         1 2 3 4 //when i > number return 3 and so on 

    for (int i = 1;  ; i++)
    {
        if( number < i)
        {
            cout<< i-1;
            return 0 ;
        }
        else
        {
            number -= i ;
        }
        
    }
}