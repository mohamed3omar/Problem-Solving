#include<iostream>

using namespace std;

int main(){

    char c ;

    cin>>c;

    if( c >= 97 && c < 122 )
    {
        cout<<(char)(c+1);
    }
    //here is the trick
    if( c == 122)
    {
        cout<<(char)(c-25);

    }

    return 0 ;
}