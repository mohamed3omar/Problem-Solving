#include<iostream>

using namespace std;

int main(){

    int num ;

    cin>> num;

    if( num > 1)
    {
        for (int i = 1; i <= num; i++)
        {
            if( i % 2  == 0 )
            {
                cout<<i<<endl;
            }
        } 
    }
    else{
        cout<<-1;
    }


    return 0 ;
}