#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long number ;

    cin >> number ;

    long long div = sqrt(number); 

    if( number == 0 || number == 1)
    {
        cout<<"NO"<<endl;
        //for time limit decrease time
    
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