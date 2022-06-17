#include<iostream>

using namespace std;

int main(){

    long long elements;

    cin>> elements;

    long long numbers[elements];

    long long sum = 0 ;

    for (int i = 0; i < elements; i++)
    {
        cin>> numbers[i];
        
        sum += numbers[i];
        
    }
    
    cout<<abs(sum) << endl;
    
    
}