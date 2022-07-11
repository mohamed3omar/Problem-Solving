#include<bits/stdc++.h>

using namespace std;

int main()
{
    double number , res ;

    cin >> number ;

    for (int i = 2; i <= number; i++)
    {
        res += log10(i);
    }
    cout<< "Number of digits of "<< number<< "! is " << (int)res +1<<endl ;
    
}