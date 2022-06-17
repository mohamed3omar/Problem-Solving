#include<iostream>

using namespace std ;
int res[1000005];
int main(){

    long long cases;

    long long counter = 0 ;

    cin>> cases;

    for(int i=0; i<cases; i++){


        long long num1 , num2 ;
        
        cin>> num1 >> num2 ;

        if( (num1*(num1+1)/2) < num2 )
        {
            cout<<-1;
        }
        else{
            long long sum = 0 ;
            for (int j=num1; j >= 1; j--)
            {
                if( sum+j <= num2 )
                {
                    sum+=j;
                    res[counter] = j;
                    counter++;
                }
                if( sum == num2)
                {
                    break;
                }
            }
            
        }
        for (int x = 0;x < counter;x++)
        {
            cout<<res[x]<<" " ;
        }
        cout<<endl;
        counter = 0 ;
        
    }
}