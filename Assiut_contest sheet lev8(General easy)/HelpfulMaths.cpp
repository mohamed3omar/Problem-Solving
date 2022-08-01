#include<bits/stdc++.h>

using namespace std;

int main()
{
    string equ ;

    cin >> equ ;

    int mysize = (equ.length() / 2 ) + 1 ;

    int arr[mysize ] ;

    int counter = 0 ;

    for(int i = 0 ; i < equ.length() ; i++ )
    {   
        if( equ[i] == '+')
        {
            continue;
        }
        arr[counter] = equ[i] - '0';
        counter++; 
    }
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr , arr+n );
    
    for(int i = 0 ; i < mysize ; i++ )
    {   
        if( i != 0 )
        {
            cout<<"+";
        }
        cout<<arr[i];
    }
}