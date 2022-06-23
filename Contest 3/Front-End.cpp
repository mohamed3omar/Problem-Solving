#include<iostream>

using namespace std;

int main()
{
    int size ;

    cin >> size ;

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    //loop till size/2 to print front element and back element together
    for (int i = 0; i < size/2; i++)
    {
        cout<< arr[i] << " " << arr[ size - i - 1] << " ";
    }
    //still there is mid element doesn't appear if the size in odd
    //if the size is not even to print the mid number
    if( size % 2 !=  0 )
    { 
        cout<< arr[size/2];
    }
}