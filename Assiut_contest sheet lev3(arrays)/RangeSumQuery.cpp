#include<iostream>

using namespace std;

int main()
{   
    //for the first time may cause time limit
    long long n , q ; 

    cin>> n >> q;

    long long arr[n];
    long long arr2[n];

    for(int i=0; i<n; i++)
    {
        cin>> arr[i];
        if( i == 0 )
        {
            arr2[i] = arr[i];
        }
        else
        {
            arr2[i] = arr[i] + arr2[i-1];            
        }
    }
    while (q--)
    {   
        long long l , r;

        cin>> l >> r ;

        l--;

        r--;
        //l start , r end
        

        long long sum = arr2[r] - arr2[l] + arr[l];

        cout<<sum<<endl; 

    }     
    
    
}