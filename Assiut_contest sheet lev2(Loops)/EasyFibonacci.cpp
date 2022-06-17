#include<iostream>

using namespace std;

int main(){

    int num ;

    cin>> num;

    int start = 0 , second = 1 ;
    if( num ==  1 )
    {
        cout<<start<<endl;
    }
    else if( num == 2 )
    {
        cout<<start<< " " << second ;
    }
    else{
        cout<<start<< " " << second<<" ";
        for (int i = 2; i < num; i++)
        {
            int res = start + second;

            cout<<res<<" ";

            start = second ;

            second = res;
                    
        }
        
    }


    return 0 ;
}