#include<iostream>

using namespace std;

int main()
{
    int n , q , l , r ,sum = 0; 

    cin>> n >> q;

    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>> arr[i];
    }
    for (int j = 0; j < q ; j++)
    {   
        sum = 0;

        cin>> l >> r ;

        for (int i = l-1; i < r; i++)
        {
            sum +=arr[i];
        }

        cout<<sum<<endl; 

    }     
    
    
}