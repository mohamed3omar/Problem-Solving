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

        int flag =  0 ;

        for (int i = 0; i < size-2; i++)
        {
            if( str[i] == '0' && str[i+1] == '1' && str[i+2] == '0'
            ||  str[i] == '1' && str[i+1] == '0' && str[i+2] == '1' )
            {
                flag = 1;
                break;
            }
        
        }
        if( flag == 1 )
        {
            cout<<"Good"<<endl; 
        }
        else{
            cout<<"Bad"<<endl;
        }
    }
    
}