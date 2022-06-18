#include<iostream>

using namespace std;

int main()
{
    int numbers , x ;

    cin >> numbers;

    int arr[numbers];

    for (int i = 0; i < numbers; i++)
    {
        cin>> arr[i];
    }
    int minindex = arr[0];
    int flag = 0;
    for (int i = 0; i < numbers; i++)
    {
        if( arr[i] < minindex )
        {
            minindex = arr[i];            
        }
    }
    for (int i = 0; i < numbers; i++)
    {
        if(minindex == arr[i])
        {
            flag++;
        }
    } 
    if( flag % 2 == 1)
    {
        cout<<"Lucky";
    }
    else
    {
        cout<<"Unlucky";
    }  
    
    
}