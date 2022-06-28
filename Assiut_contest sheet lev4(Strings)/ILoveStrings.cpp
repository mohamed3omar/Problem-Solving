#include<iostream>
#include<iostream>
 
using namespace std;
 
int main()
{
    int cases;
 
    cin >> cases;
 
    while (cases--)
    {
        string str1 , str2 ;
 
        cin >> str1 >> str2;
 
        int size = str2.size() + str1.size();
        
        int flag1  = 1 , flag2 = 1 ;
        for (int i = 0; i < size; i++)
        {   
            if( str1.size() != i && flag1)
            {
                cout<<str1[i] ;
            }
            else{
                flag1 = 0 ;
            }
            if( str2.size() != i && flag2)
            {
                cout<<str2[i] ;
            }
            else {
                flag2 = 0 ;
            }

        }
        cout<<endl;
        
    }
    
}