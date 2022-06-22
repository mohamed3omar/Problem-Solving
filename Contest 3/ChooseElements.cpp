#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    long long size , k ;

    cin >> size >> k ;

    long long arr[size];

    for (int i = 0; i < size; i++)
    {
        cin>> arr[i];
    }
    sort(arr , arr+size);
    reverse(arr , arr+size);
    long long sum = 0 ;
    for (int i = 0; i < k; i++)
    {   
        //because : we have to choose at most k
        if( arr[i] < 0 )
        {
            break;
        }
        sum += arr[i];
    }
    cout<<sum ;
    
    
}