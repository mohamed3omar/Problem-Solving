#include<bits/stdc++.h>

using namespace std;

void isprime( long long cases)
{   
    long long number;


    while(cases--)
    {
        cin >> number;
        //for time limit(decrease time)
        long long div = sqrt(number); 

        if( number == 0 || number == 1)
        {
            cout<<"NO"<<endl;
            //for time limit decrease time
            continue;
        }
        int flag = 0 ;
        for (int i = 2; i <= div; i++)
        {
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
        
    }
}

int main()
{
    long long cases ;

    cin >> cases;
    
    isprime( cases);
}