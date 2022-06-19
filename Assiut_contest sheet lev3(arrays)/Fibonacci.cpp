#include<iostream>

using namespace std;

int main()
{
    long long postion ;

    cin>> postion ;

    long long start  = 0 ;

    long long sec = 1;

    if( postion == 1)
    {
        cout<<start<<endl;
    }
    else if ( postion == 2)
    {
        cout<< sec<<endl;
    }
    else{
        for (int i = 3; i <= postion; i++)
        {
            long long res = start + sec ;
 
            start = sec ;

            sec = res;
        }
        cout<<sec<<endl;
        
    }

}