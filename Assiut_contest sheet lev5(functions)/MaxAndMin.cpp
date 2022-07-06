#include<bits/stdc++.h>

using namespace std;

void minMax(int arr[] , int n )
{
    int min  , max = 0    ;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i] ;

        if( i == 0)
        {
            min = arr[i];
        }

        if( arr[i] < min)
        {
            min = arr[i];
        }
        
        if( arr[i] > max)
        {
            max = arr[i];
        }
    }

    cout<< min << " " << max << endl;
    
}

int main()
{
    int size ;

    cin >> size;

    int arr[size];

    minMax(arr, size);
}