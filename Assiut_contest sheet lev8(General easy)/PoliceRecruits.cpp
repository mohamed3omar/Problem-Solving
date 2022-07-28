#include<bits/stdc++.h>

using namespace std;

int main()
{
    int number ;

    cin >> number ;

    int pol = 0 , isu = 0  , num;

    for (int i = 1; i <= number; i++)
    {
        cin >> num ;

        if( num == -1 )
        {
            if( pol > 0 )
            {
                pol--;
            }
            else{
                isu++;
            }
        }
        else
        {
            pol+= num;
        }
    }
    cout<<isu;
}