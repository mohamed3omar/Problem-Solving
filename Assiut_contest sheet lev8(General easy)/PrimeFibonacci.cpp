#include<bits/stdc++.h>

using namespace std;

//solved but with time limit but it is true 

long long fib(int n)
{
    if( n == 1  )
    {
        return 0;
    }
    else if( n == 2 )
    {
        return 1;
    }
    else{
        return fib(n-1) + fib(n-2);
    }
}
void isprime( int number)
{   

        //for time limit(decrease time)
        long long div = sqrt(number); 

        if( number == 0 || number == 1)
        {
            cout<<"not prime"<<endl;
            return ;
            //for time limit decrease time
        }
        int flag = 0 ;

        for (int i = 2; i <= div; i++)
        {
            if( number % i == 0 )
            {   
                cout<<"not prime";
                flag = 1;
                break;
            }
        }
        if( flag == 0 )
        {
            cout<<"prime"<<endl;
        } 
}

int main()
{
    int cases ;

    cin >> cases ;

    int num ;

    while( cases-- )
    {
        cin >> num ;

        int res = fib(num);

        isprime(res);
    }


}