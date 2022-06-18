#include<iostream>

using namespace std;

int main(){

    int elements;

    cin>>elements;

    int numbers[elements];

    int value;

    int postion = 3;

    for (int i = 0; i < elements; i++)
    {
        cin>>numbers[i];
    }
    value = numbers[0];

    postion = 1;

    for (int i = 1; i < elements; i++)
    {   
        if( numbers[i] <  value )
        {
            value = numbers[i];
            postion  = i + 1;
        }
    }
    cout<<value<<" "<<postion<<endl;
    
    
}