#include<iostream>

using namespace std;

int main(){

    long long tests ;

    cin>> tests ;

    long long num1 , num2 ;

    while( tests--)
    {
        long long minimum , maximum;

        cin>> num1 >> num2 ;
        
        maximum = max(num1 , num2);

        minimum = min(num1 , num2);

        minimum--;

        long long result1 = minimum *(minimum + 1)/2 ;

        long long result2 = maximum *(maximum + 1)/2;

        cout<<result2 - result1<<endl;
    
    }


    
}