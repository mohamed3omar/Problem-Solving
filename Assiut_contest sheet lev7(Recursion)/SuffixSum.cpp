#include<bits/stdc++.h>

using namespace std;

long long sumLastM(long long arr[] , long long size , long long n )
{
    static int counter = 0 ; 

    if( counter == n)
    {
        return 0 ;
    }

    counter++;
    
    return arr[--size] + sumLastM(arr , size , n);
}

int main()
{
    long long size , numbers;

    cin >> size >> numbers;

    long long arr[size] ;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i] ;
    }

    cout<<sumLastM(arr, size , numbers);
    
}