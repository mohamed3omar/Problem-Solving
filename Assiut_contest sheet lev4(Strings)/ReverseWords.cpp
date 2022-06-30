
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str ;

    int flag = 0 ;

    while( cin>> str )
    {

        reverse( str.begin() , str.end());

        if( flag ) 
        {
            cout<<" " ;
        }
        
        flag = 1; 
        
        cout<< str ;
    }
    

    
    
}   