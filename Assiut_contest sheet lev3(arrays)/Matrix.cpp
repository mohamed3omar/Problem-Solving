#include<iostream>

using namespace std;

int main()
{
    int n ;

    cin>> n;

    int arr[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>> arr[i][j];
        }
        
    }
    int sum1 = 0 ;
    int sum2 = 0 ;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {   
            //for first(main) diagonal
            if( i == j)
            {
                sum1 += arr[i][j];
            }
            //for second diagonal
             if( i == (n - j -1))
            {
                sum2 +=arr[i][j];
            }
        }
        
    }
    cout<<abs(sum1-sum2)<<endl;
    
    


    
}