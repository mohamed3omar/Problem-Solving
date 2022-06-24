#include<iostream>
#include<string>
using namespace std;

int main()
{
    int cases;

    cin >> cases;

    while (cases--) 
    {   
        string str;

        cin >> str;

        int size = str.size();

        if( size > 10 )
        {
            cout<< str[0] << size-2 << str[size-1]<<endl;
        }
        else
        {
            cout<< str<<endl;
        }
    }
    

}