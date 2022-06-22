#include<iostream>

using namespace std;

int main()
{
    int cases;

    cin >> cases ;

    int width , height ;

    for (int i = 0; i < cases; i++)
    {
        cin>> width >> height ;

        if( width == height )
        {
            cout<< "Square"<< endl;
        }
        else
        {
            cout<<"Rectangle"<< endl;
        }
    }
    
}