#include<bits/stdc++.h>

using namespace std;

void avrage( double arr[] , int n )
{   
    double sum = 0  ;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        sum += arr[i] ;
    }
    
    cout<< fixed << setprecision(7)<<(sum / n) << endl;
}

int main()
{
    int size ; 

    cin >> size;

    double arr[size];

    avrage( arr ,  size );
}