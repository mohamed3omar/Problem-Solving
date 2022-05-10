#include<iostream>
#include<string>

using namespace std;

int main(){


    float num ;

    cin>>num;

    int num1 = num;

    float result = num - num1;

    if(result != 0 )
    {
        cout<<"float "<<num1<<" "<<result<<endl;
    }
    else
        cout<<"int "<<num1<<endl;

     
    return 0 ;


}