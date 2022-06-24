#include<iostream>
#include<string>
using namespace std;

int main()
{
    string num ;

    cin >> num;

    long long sum = 0  ;

    for (int i = 0; i < num.size(); i++)
    {
        sum += (num[i]- '0');
    }
    cout<<sum << endl;
}

