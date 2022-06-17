#include<iostream>
#include<math.h>
using namespace std;


int main(){

    int cases ;

    long long num;

    cin>>cases;


    for (int i = 0; i < cases; i++)
    {
        cin>>num;
        int ones = 0;   
        //convert to binay by count the number of ones
        while( num > 0 )
        {
            if( num % 2 == 1 )
            {
                ones++;
            }
            num /= 2;
        }
        long long sum = 0 ;
        //after counting num of ones we need to num the ones and convert them into decimal
        //convert sum of ones into deciml
        for (int z = 0; z < ones; z++)
        {
            sum+= 1 * pow(2,z);
        }
        cout<<sum<<endl;      
    } 
}