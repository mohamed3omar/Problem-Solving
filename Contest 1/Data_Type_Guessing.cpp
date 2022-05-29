#include<iostream>

using namespace std;

int main(){

    double n , k , a ;

    cin>> n >> k >> a;

    double result = ( n * k ) / a ;

    long long result2 = result;

    double result3 = result - result2;


    if( result3 > 0)
    {
        cout<<"double";
    }
    else if ( result <= 2147483647)
    {
        cout<<"int";
    }
    else{
        cout<<"long long";
    }
    
    return 0 ;
}