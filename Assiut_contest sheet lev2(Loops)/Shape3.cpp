#include<iostream>

using namespace std;

int main(){

    int number ;

    cin>>number;

    for (int rows = 1; rows <= number; rows++)
    {
        //for spaces
        for (int s = 0; s < number-rows; s++)
        {
            cout<<" ";
        }
        //for stars
        for (int st = 0; st < rows*2-1; st++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    //continue laterrr
    // for (int rows = 1; rows <= number; rows++)
    // {
    //     //for spaces
    //     for (int s = 0; s < rows-1; s++)
    //     {
    //         cout<<" ";
    //     }
    //     //for stars
    //     for (int st =number*2-1 ; st > 0; st--)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    
}