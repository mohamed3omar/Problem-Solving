#include<iostream>
#include<sstream>
using namespace std;

int main(){
    //stringstream used to convert string to intger
    string number ;

    cin>> number ;

    int size = number.size();

    char num2[size];

    int counter = 0 ;

    for (int i = size- 1 ; i >= 0 ; i--)
    {
        num2[counter] = number[i];
        counter++;
    }

    int result1 , result2;

    stringstream s1 ;

    s1 << number; 

    s1 >> result1 ;

    stringstream s2;

    s2 << num2;

    s2 >> result2;

    cout<<result2<<endl;

    if( result1 == result2)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0 ;
}