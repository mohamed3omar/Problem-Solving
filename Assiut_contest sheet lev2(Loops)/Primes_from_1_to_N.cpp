#include<iostream>

using namespace std;

int isprime( int num)
{
    int div = num /2 ;

    for (int i = 2; i <=div; i++)
    {
        if( num % i == 0 )
        {
            return false;
            break;
        }  
    }
    return num; 
}

int main(){

    int counter;

    cin>>counter;

    for (int i = 2; i <= counter; i++)
    {
        int result = isprime(i);

        if( result != false)
        {
            cout<<i<<" ";
        }
    }
    
    
    

    return 0 ;
}