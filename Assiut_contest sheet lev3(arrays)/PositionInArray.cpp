#include<iostream>

using namespace std;

int main(){

    int elements;

    cin>> elements;

    int numbers[elements];

    for (int i = 0; i < elements; i++)
    {
        cin>> numbers[i];

        if( numbers[i] <= 10)
        {
            cout<<"A["<<i<<"] = "<<numbers[i]<<endl;
        }
    }
    
}