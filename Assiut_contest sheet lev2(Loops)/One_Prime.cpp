#include<iostream>

using namespace std;

int main(){

    int number , div;

    int flag = 0 ;

    cin>> number ;

    div = number / 2; //number doesn't accept any number > 1/2 of number

    //just check 1/2 of the number inside 
    for (int i = 2 ; i < div; i++)
    {
        //checking all numbers < 1/2 of the number
        if( number % i == 0 )
        {
            cout<<"NO"<<endl;
            flag = 1;
            break;
        }
    }
    
    if( flag == 0 )
    {
        cout<<"YES"<<endl;
    }
    
    return 0 ;
}