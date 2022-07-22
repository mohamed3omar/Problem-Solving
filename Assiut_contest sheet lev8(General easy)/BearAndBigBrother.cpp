#include<bits/stdc++.h>

using namespace std;

int main()
{
    int age1 , age2 ;

    cin >> age1 >> age2 ;

    int counter = 0 ;

    while(age1 <= age2)
    {   
        age1 *= 3;

        age2 *=2 ;

        counter++;
    }
    cout<<counter;
}