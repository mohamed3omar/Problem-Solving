#include<bits/stdc++.h>

using namespace std;

int main()
{
    string  con, s2 , keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./" ;

    char c ;

    cin >> c >> s2 ;

    for( int i = 0 ; i < s2.length() ; i++ )
    { 
    //new func "find" find index of string
        int n = keyboard.find( s2[i] );

        if( c == 'R')
        {
        con += keyboard[n-1];
        }
        else {
        con += keyboard[n+1];
        }
    }


    cout<<con ;


    
}