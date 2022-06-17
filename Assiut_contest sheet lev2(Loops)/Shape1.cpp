#include<iostream>

using namespace std;

int main(){

    int number ;

    cin>> number;

    for (int i = 1; i <= number; i++)
    {
        for (int j = number; j >= i ; j--)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
    

    return 0 ;
}