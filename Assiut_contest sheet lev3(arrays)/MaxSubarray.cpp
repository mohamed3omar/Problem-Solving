#include<iostream>

using namespace std;

int main()
{
    int cases;

    cin>> cases;

    while (cases--)
    {
        int size;

        cin>> size;

        int arr[size];

        int value;
 
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
            cout<<arr[i]<<" ";
        }
        int i = 0 ;
        int ma ;
        int z = 0;

        while (true)
        {   
            if( z == size -1)
            {
                break;
            }
            if( i == z )
            {
                ma = max(arr[i] , arr[i+1] );
            } 
            else
            {
                ma = max( ma , arr[i+1] );
            }
            cout<< ma  << " ";
            i++;
            if( i == size -1 )
            {
                z++;
                i = z; 
            }
        } 
        cout<<endl;
    }
    
}