#include<bits/stdc++.h>

using namespace std;

void shiftRight( int n )
{
    int counter = 0 ;

    for (int i = 0; i < n; i++)
    {
        int value ;

        cin >> value ;

        if( value == 0 )
        {
            counter++;
        }
        else
        {
            cout<< value << " ";
        }
    }
    for (int i = 0; i < counter; i++)
    {
        cout<< 0 << " " ;
    }
    
    
}

int main()
{
    int size ;

    cin >> size;

    shiftRight( size );
}