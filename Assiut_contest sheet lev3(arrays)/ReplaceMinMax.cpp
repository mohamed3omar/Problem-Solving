#include<iostream>

using namespace std;

int main()
{
    int elements;

    cin>> elements;

    int numbers[elements];


    for (int i = 0; i < elements; i++)
    {
        cin>> numbers[i];
    }
    int minNum = numbers[0];
    int maxNum = numbers[0];
    for (int i = 0; i < elements; i++)
    {
        if( numbers[i] < minNum )
        {
            minNum = numbers[i];
        }
        else if ( numbers[i] > maxNum )
        {
            maxNum = numbers[i];
        }
    }
    for (int i = 0; i < elements; i++)
    {
        if( minNum == numbers[i])
        {
            numbers[i] = maxNum;
        }
        else if( maxNum == numbers[i])
        {
            numbers[i] = minNum;
        }
        cout<<numbers[i]<<" ";
    }
   
    
    
    
}