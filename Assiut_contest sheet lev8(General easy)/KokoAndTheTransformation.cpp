#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n , m ;

    cin >> n >> m ;

    int num ;

    int sum1 = 0 , sum2 = 0 ;

    for (int i = 0; i < n; i++)
    {
        cin >> num ;

        sum1 += num;
    }

    for (int i = 0; i < m; i++)
    {
        cin >> num ;

        sum2 += num;
    }

    if( sum1 == sum2 )
    {
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    
    
}