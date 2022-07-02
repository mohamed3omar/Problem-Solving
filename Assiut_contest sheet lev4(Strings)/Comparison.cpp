#include <bits/stdc++.h>

using namespace std;

int main()
{
    //there are built in func erase(p1 , p2);
    string str , sub1 = "" , sub2;

    cin >> str;

    string myvalue = str;

    string smallstring = str; 

    for (int i = 0; i < str.length()-1; i++)
    {
        sub1 += str[i] ;

        myvalue.erase(0,1);

        sub2 = myvalue ;

        sort(sub1.begin(),sub1.end());

        sort(sub2.begin(),sub2.end());

        smallstring = min(smallstring, sub1+sub2);
    }
    
    cout<<smallstring <<endl;



}