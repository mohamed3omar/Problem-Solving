#include<iostream>

using namespace std;

int main()
{
    string str1 , str2 ;

    cin>> str1 >> str2 ;

    int size = min(str1.size(), str2.size()); ;

    int flag = 0;
    for (int i = 0; i < size; i++)
    {
        if( str1[i] < str2[i] )
        {
            cout<<str1;
            flag = 0 ;
            break;
        }
        else if( str1[i] > str2[i])
        {
            cout<<str2;
            flag = 0 ;
            break;
        }
        else{
            flag = -1;
        }
    }
    if( flag == -1 )
    {
        if( str1.size() > str2.size())
        {
            cout<< str2;
        }
        else
        {
            cout<< str1;
        }
    }
    
    
    
    
}