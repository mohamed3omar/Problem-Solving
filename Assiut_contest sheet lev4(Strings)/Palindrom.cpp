#include<iostream>
#include<iostream>
using namespace std;

int main()
{
    string str ;

    cin >> str;

    int size = str.size();

    char compare[size] ;

    int counter = 0 ;

    int flag = 0;

    for (int i = size-1; i >= 0 ; i--)
    {
        compare[counter] = str[i] ;

        if( str[counter] != compare[counter])
        {   
           cout<<"NO";
           break;
        }
        if( str[counter] == compare[counter])
        {
            flag++;
            
        }
        counter++;
    }
    if( flag == size ) 
    {
        cout<<"YES";
    }
    
    
    
    

}