#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long number ;

    cin >> number ;
    //to decrease the time
    long long div = sqrt(number); 

    bool flag = 0 ;

    if( number == 0 || number == 1)
    {
        cout<< "NO" ;
        return 0 ;
    }
    for (int i = 2; i <= div; i++)
    {
        if( number % i == 0 )
        {
            flag = 1;
            break;
        }
    }
    if( flag == 0 )
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    
    
}