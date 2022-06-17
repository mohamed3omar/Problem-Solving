#include<iostream>

using namespace std;

int main(){

    int cases , x , y , min , max;

    int sumOdd = 0 ;

    cin>> cases;
    
    for (int i = 0; i < cases; i++)
    {
        cin>> x >> y;
        
            if( x >= 0 && y>=0)
            {
                if( x > y )
                {
                    min = y;
                    max = x;
                }
                else{
                    min = x ;
                    max = y;
                }
                for (int i = min+1; i < max; i++)
                {
                    
                    if( i % 2 == 1)
                    {
                        sumOdd += i;
                    }
                }
                cout<<sumOdd<<endl;
                //reset sum;
                sumOdd = 0 ;
                
            }
            else{
                cout<<"enter positve number";
            }   
    }
    
    return 0;
}