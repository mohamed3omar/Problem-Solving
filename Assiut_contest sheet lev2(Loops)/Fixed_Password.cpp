#include<iostream>

using namespace std;

int main(){

    int pass;

    while (true)
    {      

        cin>> pass;

        if( pass == 1999)
        {
            cout<<"Correct"<<endl;
            break;
        }
        else{
            cout<<"Wrong"<<endl;
        }
    }
    
    return 0 ;
}