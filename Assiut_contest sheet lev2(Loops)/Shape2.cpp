#include<iostream>

using namespace std;

int main(){

    int rows ;

    cin>> rows;

    //Note
    // the row conatin (stars , spaces)
    //to calc stars for row >> i*2-1 now i is the number of single row
    //to calc spaces for row >> totalRows - i ; where i is the number of single row 
    for (int i = 1; i <= rows; i++)
    {   
        //for spaces
        for (int w = 0; w < rows-i ; w++)
        {
            cout<<" ";
            
        }
        //for stars
        for (int s = 0; s < i*2-1; s++)
        {
            cout<<"*";
        }

        cout<<endl;
    }
        
    return 0 ;
}