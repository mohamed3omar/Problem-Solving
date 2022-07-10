#include<bits/stdc++.h>

using namespace std;

void sumofRange( double a , double b )
{

    double mi = min( a , b);

    double ma = max ( a , b );

    double res1 = (mi * ( mi + 1 ) / 2) ;//10

    double res2 = (ma * ( ma + 1 ) / 2) ;//21

    double all = mi+ (res2 - res1);

    cout<< all << endl;

    int sum1 = 0 , sum2 = 0 ;
    
    for (int i = mi; i <= ma; i++)
    {

        if ( i % 2 == 0 )
        {
            sum1 += i;
            continue;
        }
        else if( i % 2 == 1)
        {
            sum2 += i;
        }
    }
    cout<< sum1 <<endl;
    cout<< sum2 <<endl;
    
}

int main()
{
    double num1 , num2;

    cin >> num1 >> num2;

    sumofRange( num1 , num2);

}