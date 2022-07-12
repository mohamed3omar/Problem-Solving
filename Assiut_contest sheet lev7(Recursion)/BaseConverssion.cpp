#include<bits/stdc++.h>

using namespace std;

void BaseConv( int n )
{
    if( n == 0 )
    {
        return ;
    }
    BaseConv( n / 2);

    cout<< n % 2 ;
}

int main()
{
    int cases;

    cin >> cases;

    while(cases--)
    {
        int num ;

        cin >> num ;

        BaseConv(num);

        cout<<endl;
    }
}