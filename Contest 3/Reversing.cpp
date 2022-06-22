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
        cin >> arr[i] ;
    }
    int flag = 0;
    for (int i = 0; i < size; i++)
    {
        if( arr[i] == 0 )
        {   
            reverse(arr , arr+i);                   
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }

    
    
}