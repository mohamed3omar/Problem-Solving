#include<iostream>

using namespace std;

int main(){

    int number ;

    cin>> number;

    for (int i = 0; i < number; i++)
    {
        for (int j = 0; j < number; j++)
        {   //consider it two dimention array to drow the x 
            if(i == j &&( i != number/2) && (j != number/2)){
                cout<<"\\";
            }//for printing X
            else if( ( i == number/2) && (j == number/2) ){
                cout<<"X";
            }//here is the trick
            else if ( (j != number/2) && i == ((number -1 )-j)){
                cout<<"/";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
        
    }
    

}