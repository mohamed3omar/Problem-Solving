#include<bits/stdc++.h>

using namespace std;

int main()
{
    int num ;

    cin >> num ;

    int lucky [13] = {4,7, 44 , 47,74 , 77,444 , 447, 474 , 477  , 747, 774 , 777};

    int flag = 1 ;

    for (int i = 0; i < 13; i++)
    {
        if( num % lucky[i] == 0)
        {
            flag = 0 ;

            break;
        }
    }
    if( flag == 0 )
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}