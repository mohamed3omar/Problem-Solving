#include<bits/stdc++.h>

using namespace std;

int main()
{
    int size , counter = 1;

    cin >> size ;

    string value , temp;

    for (int i = 0; i < size; i++)
    {
        cin >> value;

        if( i == 0 )
        {
            temp = value;
            continue;
        }
        if( value[0] == temp[1])
        {
            counter++;
        }
        temp = value;
    }
    cout<<counter;
    
}