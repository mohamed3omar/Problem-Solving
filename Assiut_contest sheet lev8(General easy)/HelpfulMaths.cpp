#include<bits/stdc++.h>

using namespace std;

int main()
{   
    string str ;

    cin >> str ;

    if( str.size() == 1 )
    {
        cout<< str ;
    }
    else{

        sort(str.begin() , str.end());

    char plus[str.size()-1];

    int z = 0 ;

    for (int i = 0 ; i < str.size(); i++)
    {
        if( str[i] == '+' )
        {
            plus[z] = str[i] ;
            z++;
        }
    }
    int counter = 0 ;
    for(int i = z ; i < str.size()-1; i++)
    {   
        
    }  

        
    }

    
}