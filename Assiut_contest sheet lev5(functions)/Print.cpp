#include<bits/stdc++.h>

using namespace std;


void print(int num)
{
    int flag = 0 ;
    for(int i = 1; i <= num ; i++)
    {
        //this condtion just for ignore last space to handle first case 
        if( flag)
        {
            cout<< " ";
        }
        
        flag = 1;

        cout<< i  ;
    }

}

int main()
{
    int number ;

    cin >> number;

    print(number);
}