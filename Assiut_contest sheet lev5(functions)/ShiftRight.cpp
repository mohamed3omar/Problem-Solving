#include<bits/stdc++.h>

using namespace std;

void shiftright(int arr[] , int n , int x )
{
    for(int i = 0; i < n; i++)
    {
        cin>> arr[i]; 
    }

    int sh = x % n ;
    
    for(int i = n - sh; i < n; i++)
    {
        cout<< arr[i] << " " ;
    }
    for (int i = 0 ; i < n - sh ; i++)
    {
        cout<< arr[i] << " " ;
    }
}

int main()
{
    int  n , x ;

    cin >> n >> x;

    int arr[n];

    shiftright(arr , n , x );

}