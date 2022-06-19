#include<iostream>
#include<string>
using namespace std;

int main()
{
    int a , b ;

    cin >> a >> b ;

    string s ;

    cin>> s ;

    if( a + b + 1 != s.size())
    {
        cout<<"No";
        return 0 ;
    }
    if( s[a] != '-' )
    {
        cout<<"No";
        return 0;
    }
    int counter = 0 ;
    for (int i = 0; i < s.size(); i++)
    {   //ignore the '-' , and count the number before it and after it
        if( s[i] >= 48 && s[i] <= 57  & i != a)
        {
            counter++;
        }
    }
    if( counter ==  a + b)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
}