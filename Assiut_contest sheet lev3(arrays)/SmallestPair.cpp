#include<iostream>

using namespace std;

int main()
{
    int cases , size ;

    cin >> cases;

    int  result =0 , flag = 1 ;

    int min = 0 ;

    while(cases--)
    {
        cin >> size ;

        int numbers[size];

        for ( int i = 0; i < size; i++ )
        {
            cin>> numbers[i] ;            
        }
        for (int i = 1; i <= size; i++)
        {
            for (int j = i+1; j <= size ; j++)
            {
                result =( numbers[i-1] + numbers[j-1]) + (j -i);
                
                if(flag == 0 && min > result  )
                {
                    min = result;
                }
                if( flag ) 
                {
                    min = result;
                    flag = 0 ;   
                } 
                result = 0 ;
            }    
        }
        flag = 1;
        cout<<min<<endl;
    }
    
    




}