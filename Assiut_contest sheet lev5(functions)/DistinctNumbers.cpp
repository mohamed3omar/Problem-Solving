#include<bits/stdc++.h>

using namespace std;

void distinctArray( int arr[]  , int n )
{
    

    for( int i=0; i< n; i++ )
    {
        cin >> arr[i];
    }
    sort( arr  , arr+n );

    int counter = 0 ;

    for( int i = 0 ; i < n ; i++ )
    {
        if( arr[i] == arr[i+1] )
        {
            continue;
        }
        counter++ ;
    }
    cout <<counter <<endl;
}

int main()
{
    int size; 

    cin >> size ;

    int arr[size] ;

    distinctArray(arr, size);
}