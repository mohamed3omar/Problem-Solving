
#include <bits/stdc++.h>

using  namespace std;

int main(){

    string value; 

    cin>> value;

    string myvalue = "hello";

    int i = 0 , z = 0  ;
    while (true)
    {   
        if( i == value.size() || z == myvalue.size())
        {
            break;
        }
        if( value[i] == myvalue[z])
        {
            z++;
        }
        i++; 

    }
    if( z == 5)
    {
        cout<<"YES";
    } 
    else{
        cout<<"NO";
    }
    
}