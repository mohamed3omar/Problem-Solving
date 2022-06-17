#include<iostream>

using namespace std;

int main(){

    int numbers ;

    cin >> numbers;
    
    int result = 0 ;


    for (int i = 0; i < numbers; i++)
    {
        long long num;

        int counter = 0 ;

        cin>> num;

        if( num % 2 != 0  )
        {
            counter = 0 ;
        }
        else{
            while( num > 0)
            {
                if( num % 2 != 0)
                {   //break from while
                    break;
                }
                else{
                    counter++;
                    num/=2;
                }
            }
        }
        if( counter > result )
        {
            result = counter;
        }
    }
    cout<<result<<endl;
    
}