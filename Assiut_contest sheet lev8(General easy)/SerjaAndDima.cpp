#include<bits/stdc++.h>

using namespace std;

int main()
{
    int count , value ;

    cin >> count ;

    int arr[count] ;

    for (int i = 0; i < count; i++)
    {
        cin >> arr[i];

    }

    int start = 0 , end = count-1, r1 = 0 , r2 = 0 , max = 0, play = 0 ; 

    while(start <= end)
    {
        if( arr[start] >= arr[end] )
        {
            max = arr[start] ;
            start++;
        }
        else{
            max = arr[end] ;
            end--;
        }
        if( play % 2 == 0)
        {
            r1 += max ;
        }
        else{
            r2 += max ;
        }
        play++;
    }
    cout<< r1 << " " << r2 ;
}