#include<iostream>

using namespace std;

int main(){

    long long eyes , mouth , body;

    long long result = 0 ;

    cin >> eyes >> mouth >> body ;

    if( eyes == 0 || body == 0 )
    {
        cout<<0;
    }
    else{
        if( ( mouth >= eyes && mouth >= body ) || ( mouth>= body && mouth < eyes ) || ( mouth < body && mouth >= eyes ))
        {
        result = min( eyes , body );

        cout << result <<endl;
        }
        else if( mouth < body && mouth < eyes )
        {
            result = mouth;

            eyes -= mouth;

            body -= mouth;

            result += min( eyes/2 , body ); 

            cout << result;
        }
    }







    return 0 ;
}