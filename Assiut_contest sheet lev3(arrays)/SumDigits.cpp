#include<iostream>
#include<string>
using namespace std;

int main()
{
    int digitNum;

    cin>> digitNum;

    string num ;

    cin>> num;

    int sum = 0 ;
    for (int i = 0; i < digitNum; i++)
    {   //ASci code for 0 >>48 , 1 >>49 and so on
        //when you subtrac asci code you get the real number
        sum +=num[i] -'0';
    }

    cout<<sum ;

    
}