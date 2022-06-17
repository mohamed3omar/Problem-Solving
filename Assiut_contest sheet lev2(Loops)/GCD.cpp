#include<iostream>

using namespace std;

int main(){

    int a , b , gcd ;

    int max = 0 ;

    cin>> a >> b ;

    if( a > b)
    {
        max = a;
    }
    else{
        max = b;
    }

    for (int i = 1; i <= max; i++)
    {
        if( (a % i == 0) && (b % i == 0) )
        {
            gcd = i;
        }
    }
    cout<< gcd;
    


    return 0 ;
}