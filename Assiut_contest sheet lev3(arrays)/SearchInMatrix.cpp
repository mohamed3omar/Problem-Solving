#include<iostream>

using namespace std;

int main()
{   
    int n , m;

    cin >> n >> m;

    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>> arr[i][j];
        }
        
    }
    int x ;

    int flag = 0;
    
    cin>> x;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if( x == arr[i][j] )
            {
                flag++;
            }
            
        }    
    }
    if( flag == 0 )
    {
        cout<<"will take number";
    }
    else
    {
        cout<<"will not take number";
    }
    


}