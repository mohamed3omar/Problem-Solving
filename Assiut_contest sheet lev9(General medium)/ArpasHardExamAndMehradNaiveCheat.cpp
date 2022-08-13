#include<bits/stdc++.h>

using namespace std; 

int main()
{
    long long n  ;

    cin >> n ;

    if (n == 0 )
    {
        cout<<1<<endl;
        return 0 ;
    }
    if ( n % 4 == 0 )
    {
        cout<<6<<endl;
    }
    else if ( n % 4 == 1 ) 
    {
        cout<<8<<endl;
    }
    else if ( n % 4 == 2 )
    {
        cout<<4<<endl;
    }
    else if ( n % 4 == 3 )
    {
        cout<<2<<endl;
    }
    /* 
        note 1 % 4 = 1 ;
             2 % 4 = 2 ;
             3 % 4 = 3 ;
             4 % 4 = 0 ;
             5 % 4 = 1 ; ah shit here we go again -_=

             same last digit 1- 1378^1 = 8
                             2- 1378^2 = 4
                             3- 1378^3 = 2 
                             4- 1378^4 = 6
                             5- 1378^5 = 8
                             6- 1378^6 = 4 ah shit here we go again -_-

    */

    // another sol but not always true;
    // long long n ;

    // cin >> n ;

    // long long res = pow(1378 , n ) ;

    // cout<< (res % 10);
}