#include<iostream>

using namespace std;

int main(){

    //searching for x in array of numbers;
    int elements ;
    
    int flag = 0 ;

    cin>> elements;

    long long numbers[elements];

    for(int i=0; i<elements; i++){

        cin>>numbers[i];
    }
    //what we must search for 
    long long x;

    cin>>x;

    for (int i = 0; i < elements; i++)
    {   
        if( x == numbers[i] )
        {
            cout<<i<<endl;
            flag = 1;
            break;
        }
    }
    if( flag == 0 )
    {
        cout<<-1<<endl;
    }
    
}