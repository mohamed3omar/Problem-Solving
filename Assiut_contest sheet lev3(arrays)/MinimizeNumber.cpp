#include<iostream>

using namespace std;

int main()
{
    long numbers;

    cin >> numbers;

    long long arr[numbers];

    for (int i = 0; i < numbers; i++)
    {
        cin >> arr[i]; 

        if(arr[i] % 2 == 1 || arr[i] == 0)
        {
            cout<<0;
            return 0;
        }
    }    
    long long result = 0 ;
    for (int i = 0; i < numbers; i++)
    {
        long long counter = 0 ;
        while( arr[i] % 2 == 0 )
        {   
           counter++;
           arr[i] /= 2 ;
        }
        if( i == 0 || counter < result)
        {
            result = counter;
        }         
    }
    cout<<result<<endl;
    
    
    

}