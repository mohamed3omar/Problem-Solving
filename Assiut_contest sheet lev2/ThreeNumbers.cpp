#include<iostream>

using namespace std;

int main(){

    int start , end;

    cin>> start >> end;

    int counter = 0 ;

    for (int i = 0; i <= start; i++)
    {
        for (int j = 0; j <=start; j++)
        {   //here is the trick
            if( end-i-j >= 0 && end-i-j <= start)
            {
                counter++;
            }

        }
        
    }
    cout<<counter<<endl;
        
    return 0 ;
}