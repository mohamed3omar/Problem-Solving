#include<bits/stdc++.h>

using namespace std;

void swap(int x, int y)
{
    int temp = x ;

    x = y ;

    y = temp;

    cout<< x << " " << y << endl;
}

int main(){

    int x , y ;

    cin >> x >> y;

    swap(x , y );
}