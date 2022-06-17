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

        if( numbers[i] > 0)
        {
            cout<<1<<" ";
        }
        else if ( numbers[i] < 0 )
        {
            cout<<2<<" ";
        }
        else 
        {
            cout<<0<<" " ;
        }
    }
    
    
    
    
}