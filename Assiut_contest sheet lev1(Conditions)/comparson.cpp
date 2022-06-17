#include<iostream>

using namespace std;


int main(){

    int num1 , num2  ;

    char op;

    cin>>num1>>op>>num2;

    switch (op)
    {
    case '=':
        if(num1 == num2 )
        cout<<"Right"<<endl;
        else 
        cout<<"Wrong"<<endl;
        break;
    
    case '>':
        if(num1 > num2)
        cout<<"Right"<<endl;
        else 
        cout<<"Wrong"<<endl;
        break;
    case '<':
        if(num1 < num2)
        cout<<"Right"<<endl;
        else 
        cout<<"Wrong"<<endl;
        break;
    }







    return 0 ;
}