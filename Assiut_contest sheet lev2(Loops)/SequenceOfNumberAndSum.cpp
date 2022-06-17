#include<iostream>

using namespace std;

int main(){

    int m , n ;

    int max , min ;

    int sum = 0 ;

    int flag = true;

    while (flag)
    {  
        cin>> m >> n;
        
        if( n <= 0 || m <= 0 )
        {
            flag = false;      
        }
        else{
        if( m > n ){

            max = m;

            min = n;
        }
        else
        {
            max = n;

            min = m; 
        }
        //print number between n and m by using min , max
        for (int i = min; i <= max; i++)
        {   
            sum += i;

            cout<< i << " " ;
        }
        cout<<"sum ="<<sum<<endl;
        //reset the sum 
        sum = 0 ;
        }
        
    }
    





    return 0 ;
}