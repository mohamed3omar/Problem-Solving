#include<iostream>

using namespace std;

int main(){

    int numberofLines ;

    int  counter = 1;

    cin>> numberofLines;

    for ( int i = 1; i <= numberofLines; i++)
    {   
        if( counter % 2 == 0 )
        {
            counter++;
            cout<<"PUM"<<endl;
            //for not counteing these step
            i--;
            continue;
        }
        cout<<counter<<" ";
        counter++;
        cout<<counter<<" ";
        counter++;
        cout<<counter<<" ";
        counter++;  
    }
    //after finsh
    cout<<"PUM";
    

    return 0 ;
}