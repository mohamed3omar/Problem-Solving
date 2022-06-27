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
 
        int size1 = str1.size();
 
        int size2 = str2.size();
 
        int ma = max( size1, size2 );
        int mi = min( size1, size2 );
        
        for (int i = 0; i < ma; i++)
        {   

            if( i < mi   )
            {
                cout << str1[i] << str2[i];
            }
            if( i > mi && size2 >= size1 )  
            {
                cout<<str2[i];
            }
            else if( i > mi && size1 >= size2 )
            {
                cout<< str1[i];
            }

        }
        cout<<endl;
        
    }
    
}