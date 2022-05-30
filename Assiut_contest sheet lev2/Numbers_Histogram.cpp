#include<iostream>

using namespace std;

int main(){

    //easy way
    char symbol;

    cin>>symbol;

    int line ;

    cin>>line;

    for (int i = 0; i < line; i++)
    {
        int num;
        
        cin>>num;

        for (int i = 0; i < num; i++)
        {
            cout<<symbol;
        }
        cout<<endl;
        
    }
    




    //Another way to solve

    // char symbol ;

    // cin>>symbol;

    // int number , num;

    // cin>>number;
    // for (int i = 1; i <= number; i++)
    // {
    //     cin>> num;

    //     switch (symbol)
    //     {
    //     case '+':
    //         for (int i = 0; i < num; i++)
    //         {
    //             cout<<"+";
    //         }
    //         break;
    //     case '-':
    //         for (int i = 0; i < num; i++)
    //         {
    //             cout<<"-";
    //         }
            
    //         break;
    //     case '*':
    //         for (int i = 0; i < num; i++)
    //         {
    //             cout<<"*";
    //         }
            
    //         break;
    //     case '/':
    //         for (int i = 0; i < num; i++)
    //         {
    //             cout<<"/";
    //         }
            
    //         break;
        
    //     default:
    //         break;
    //     }
    //     cout<<endl;
    // }
    

    return 0 ;
}