#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int size ;

    cin >> size ;

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cin>> arr[i];
    }
    sort(arr, arr+size);
    int temp = 0 ;
    int result = 0 ;
    int counter = 0 ;
    for (int i = 0; i < size; i++)
    {
        if( i == 0)
        {
            temp = arr[i];
            result = 1;
        }
        else
        {
            if( temp == arr[i] )
            {
                result++;
            }
            else if( temp+1 == arr[i])
            {
                counter += result;
                temp = arr[i];
                result = 1;
            }
            else 
            {
                result = 1;
                temp = arr[i];
            }
        }
        
    }

    cout<<counter;
    
    
    
}