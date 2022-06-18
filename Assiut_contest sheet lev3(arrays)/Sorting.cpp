#include<iostream>
#include<algorithm>
using namespace std;

void selctionSort( int numbers[] , int n )
{
    int MinInd ;

    for (int i = 0; i < n-1; i++)
    {
        MinInd = i;
        for (int j = i+1; j < n; j++)
        {
            if( numbers[j] < numbers[MinInd] )
            {

                MinInd = j;              
            }  
        }
        swap( numbers[MinInd] , numbers[i]);       
    }
    
}

void swap( int&x , int&y )
{
    int temp = x;

    x = y;

    y = temp;
}

void print( int numbers[] , int n )
{
    for (int i = 0; i < n; i++)
        cout<<numbers[i] << " " ;   
}


int main()
{
    int size ;

    cin >> size;

    int numbers[size];

    for(int i = 0 ; i < size ; i++)
    {
        cin >> numbers[i];
    }
    selctionSort(numbers , size);
    print(numbers , size);
}