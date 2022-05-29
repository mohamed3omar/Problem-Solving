#include<iostream>

using namespace std;

int main(){

    long long a , b , c , d;

    cin>> a >> b >> c >> d;

    long long Result1 = a + b - c;
    long long Result2 = a - b + c;
    long long Result3 = a * b - c;
    long long Result4 = a - b * c;
    long long Result5 = a + b * c;
    long long Result6 = a * b + c;
    int flag = 0 ;
    if( Result1 == d || Result2 == d || Result3 == d || Result4 == d || Result5 == d || Result6 == d  )
    {
        flag = 1;
    }

    if( flag == 1 )
    {
        cout<<"YES";
    }
    
    else{
        cout<<"NO";
    }
    
    return 0 ;

}