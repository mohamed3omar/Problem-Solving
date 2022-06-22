#include<iostream>
#include<algorithm>
using namespace std;


//itrative binary search
//not that binary search work only on sorted arrays
int binarysearch(long long arr[] , int low ,int high , int search)
{
    while( low <= high)
    {
        int mid = (low + high) /2 ;

        if( search == arr[mid])
        {
            return mid;
        }
        else if( search > arr[mid])
        {
            low = mid + 1;
        }
        else{
            high = mid -1 ;
        }
    }
    return -1;
}




int main()
{
    //using iterative binary search
    int size , query , search ;

    cin >> size  >> query;

    long long arr[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i] ;
    }
    sort(arr , arr+size);

    int low = 0 ;

    int high = size -1 ;

    while (query--)
    {
        cin >> search ;

        int result = binarysearch(arr, low , high , search);

        if( result == -1)
        {
            cout<<"not found"<<endl;
        }
        else{
            cout<<"found"<<endl;
        }
    }
    
    
    
    




}