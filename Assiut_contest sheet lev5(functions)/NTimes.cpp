#include<bits/stdc++.h>

using namespace std;

void nTimes( int cases)
{   
    int num ;

    char c ;
    while (cases--)
    {
        cin >> num >> c;

        for (int i = 0; i < num; i++)
        {
            cout<< c << " ";
        }
        cout<<endl;
        
    }
    
}

int main()
{
    int cases;

    cin >> cases;

    nTimes(cases);
}