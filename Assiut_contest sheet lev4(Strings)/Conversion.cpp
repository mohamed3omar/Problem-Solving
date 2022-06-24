#include<iostream>
#include<string>
using namespace std;

int main()
{
    string word;

    cin >> word;

    for (int i = 0; i < word.size(); i++)
    {
        if( word[i] >= 65 && word[i] <= 90)
        {
            cout<< (char)(word[i] + 32);
        }
        else if( word[i] >= 97 && word[i] <= 122 )
        {
            cout<<(char)(word[i] -32);
        }
        if( word[i] == ',')
        {   

            word[i] = ' ' ;
            cout<<word[i];
        }
    }
    
}