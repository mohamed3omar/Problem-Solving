#include<iostream>

using namespace std;

int main(){

    int Tests , number ;

    long long factorial = 1;

    cin>> Tests;

    for( int i = 0 ; i < Tests ; i++)
    {
        cin>>number;

        for(int i = 1; i <= number; i++)
        {
            factorial *= i;
        }
        cout<<factorial<<endl; 

        factorial = 1;  
    }


    return 0 ;
}