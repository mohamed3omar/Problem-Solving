#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long number ;

    cin >> number ;

    // num((needed)) log(2) = log(number);
    // num = log(number)/log(2); //done

    double res = log2(number)/ log2(2);

    if( res-(int)res != 0 )
    {
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }
}