#include<iostream>
#include<algorithm> 
using namespace std;

int main()
{
    int elements ;

    cin>>elements;

    long long arrA[elements];
    long long arrB[elements];

    for (int i = 0; i < elements; i++)
    {
        cin>>arrA[i];
    }
    //built in function
    sort(arrA , arrA+elements);

    int flag = 0;

    for (int i = 0; i < elements; i++)
    {
        cin>>arrB[i];
    }
    sort(arrB , arrB+elements);
    //check if the two arrs are the same
    for (int i = 0; i < elements; i++)
    {
        if(arrA[i] != arrB[i])
        {
            flag = 1;
            break;
        } 
    }
    if( flag == 0 ) 
    {
        cout<<"yes";
    }
    else
    {
        cout<<"no";
    }
    

    
    
}