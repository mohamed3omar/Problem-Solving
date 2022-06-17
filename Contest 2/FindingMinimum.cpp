#include<iostream>

using namespace std;

int main(){

    int size , seque;
    int min ;
    int flag = 1;
    cin>> size >> seque;

    int counter = 0 ;
    for (int i = 1; i <= size; i++)
    {
        int value;
        cin>>value;
        if( flag)
        {
            min = value;
            flag  =  0 ;
        }
        else{
            if( value < min)
            {
                min = value;
            }
        }
        counter++;
        if( counter == seque || i == size )
        {   
            cout<< min <<" " ;
            counter = 0 ;
            flag = 1;
        }

    }
    
    
}