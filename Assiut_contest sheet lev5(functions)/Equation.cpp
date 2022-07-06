#include<bits/stdc++.h>

using namespace std;

void equation(long long x, long long n)
{
    long long result = 0 ;
    for(int i = 2 ; i <= n ; i+=2)
    {
        result += pow(x, i);
    }
    

    cout<< result << endl;
    

}

int main()
{
    long long x , y ;

    cin >> x >> y;

    equation( x , y ) ;
}