#include<iostream>

using namespace std;

int main(){

    long long seatNum ;

    cin>> seatNum;
    // TRICK TO GET ROW GAMED
    long long row = seatNum/4;

    long long column ;

    if( row % 2 == 0 )
    {   //to get column number 
        column = seatNum % 4; 
    }
    else{
        column = 3 - (seatNum % 4 );
    }

    cout<< row <<" " << column; 
}