#include<bits/stdc++.h>

using namespace std;


long long summation(long long arr[] , int n )
{
    if( n == 0 )
    {
        return 0 ;
    }
    return arr[--n] + summation(arr , n);
}

int main()
{
    int size ;

    cin >> size;

    long long arr[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout<<summation(arr , size);
    
    return 0 ;
}