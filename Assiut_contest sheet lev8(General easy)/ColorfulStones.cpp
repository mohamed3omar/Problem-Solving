#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str1 , str2 ;

    cin >> str1 >> str2 ;

    int counter = 0 ;

    for (int i = 0; i < str2.length();i++)
    {
        if( str1[counter] == str2[i])
        {
            counter++;
        }

    }

    cout<<++counter;

}