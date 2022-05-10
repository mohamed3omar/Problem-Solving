#include<iostream>
using namespace std;
void validate( int  myresult , int c){

    if( myresult == c)
        cout<<"Yes"<<endl;
    else
        cout<<myresult;
}



int main(){

    int A , B , c;

    char S , Q;

    int myresult = 0 ;

    cin>> A >> S >> B >> Q >> c;

    switch (S)
    {
        case '+': 
                myresult = A + B ;

                validate(myresult , c );
                break;
        case '-': 
                myresult = A - B ;

                validate(myresult , c );
                break;
        case '*': 
                myresult = A * B ;

                validate(myresult , c );
                break;
    }







    return 0 ;
}