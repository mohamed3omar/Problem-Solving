#include<iostream>

using namespace std;

int main(){

    //reverse array elements
    int elements ;

    cin >> elements;

    long long numbers[elements];

    for (int i = 0; i < elements; i++)
    {
        cin >> numbers[i];
    }
    for (int j = elements-1; j >=0; j--)
    {
        cout<<numbers[j]<<" ";
    }
    
    
}