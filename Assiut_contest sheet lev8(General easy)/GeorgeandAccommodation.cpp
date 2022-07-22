#include<bits/stdc++.h>

using namespace std;

int main()
{
    int size ;

    cin >> size ;

    int in , space ;

    int counter = 0 ;

    for (int i = 0; i < size; i++)
    {
        cin >> in >> space ;

        if( (in != space) &&( in != space -1))
        {
            counter++;
            continue;
        }
        
    }
    if( counter > 0 )
    {
        cout<<counter ;
    }
    else{
        cout<<0 ;
    }
    
}