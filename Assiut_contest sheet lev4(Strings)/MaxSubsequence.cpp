#include<iostream>

using namespace std;

int main()
{
    int size ;

    cin >> size;

    string value ;

    cin >> value;

    char temp  ; 

    int counter = 0 ;

    for (int i = 0; i < size; i++)
    {
        if( i ==  0 ) 
        {   
            temp = value[i] ;

            counter++;
            // cout<< value[i] ;
        }
        else{
            if( value[i] != temp)
            {
                // cout<< value[i];
                temp = value[i] ;
                
                counter++;
            }
        }
    }

    cout<<counter<< endl;
    
}