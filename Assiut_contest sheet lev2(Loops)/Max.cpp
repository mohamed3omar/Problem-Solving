#include<iostream>

using namespace std;

int main(){

    int number , num ;

    int max = 0 ;

    cin>> number;

    for(int i = 0 ; i < number ; i++)
    {
        cin>> num;

        if( num > max )
        {
            max = num; 
        }

    }
    cout<<max;


    return 0 ;
}