#include<bits/stdc++.h>

using namespace std;

void print(long long arr[] , int n , int index)
{
    if( index > n - 1)
    {
        return ;
    }

    print(arr, n , index+2);

    cout<< arr[index]<< " ";

}

int main()
{
    int size ;

    cin >> size ;

    long long arr[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i] ;
    }
    

    print( arr , size , 0 );
}