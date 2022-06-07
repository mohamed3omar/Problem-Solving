#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main(){

    int  cases;

    cin>> cases;
    //we can also use another arrya and assign it with reversed indexes
    string number;

    for (int i = 1; i <=cases; i++)
    {   
        //STRING IS ARRAY OF CHAR ..NOTE THAT
        cin>>number;

        for (int i = number.size()-1; i >=0; i--)
        {   
            cout<<number[i]<<" ";
        }

        cout<<endl;        
    }
    
    
    return 0 ;
}