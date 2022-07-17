#include<bits/stdc++.h>

using namespace std;

//Not complete
int size  ;

int mx = -(1e9+2);

void maxNum( int arr[]  )
{
    if( size ==  0)
 
    mx = max(mx , arr[--size]);

    maxNum(arr);
}

int main()
{
    cin >> size;

    int arr[size];

    for( int i = 0; i < size ; i++)
    {
        cin >> arr[i] ;
    }

    maxNum(arr);
    
}