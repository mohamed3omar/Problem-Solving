#include<iostream>

using namespace std;

int main(){

    int counter , num ;

    int odd= 0 , pos=0 , neg=0 , even= 0 ;

    cin>>counter;

    for(int i =0 ; i < counter  ; i++)
    {
        cin >> num;

        if( num % 2 == 0 )
        {
            even++;
        }
        else{
            odd++;
        }
        if( num > 0 )
        {
            pos++;
        }
        else if ( num < 0 )
        {
            neg++;
        }
    }
    cout<<"Even: "<<even<<endl;
    cout<<"Odd: "<<odd<<endl;
    cout<<"Positive: "<<pos<<endl;
    cout<<"Negative: "<<neg<<endl;


    return 0;
}