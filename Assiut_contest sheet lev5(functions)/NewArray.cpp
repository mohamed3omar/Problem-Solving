#include<bits/stdc++.h>

using namespace std ;


void newArray( int A[] , int B[] , int size)
{
    for( int i = 0; i < size ; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < size; i++)
    {
        cin>> B[i] ;
        cout<<B[i] << " ";
    }
    for(int i =0; i < size ; i++)
    {
        cout<< A[i] << " " ;
    }
}

int main()
{
    int size ;

    cin>> size;

    int A[size], B[size];

    newArray(A , B , size);

    

}