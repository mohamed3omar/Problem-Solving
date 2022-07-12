#include<bits/stdc++.h>

using namespace std;

void printDigits( int n)
{
    string str ;

    if( n > 0 )
    {
        cin >> str;

        for (int i = 0; i < str.size(); i++)
        {
            cout << str[i] << " ";
        }
        cout<<endl;

        printDigits(--n);
        
    }
}

int main()
{
    int cases ;

    cin >> cases ;

    printDigits( cases);
}