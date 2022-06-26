#include<iostream>
#include<string>
#include<algorithm>
using namespace std;


int main()
{
    string str;

    cin >> str;

    int size = str.size();


    //to sort string alphabeticly
    sort( str.begin() , str.end());
    int flag = 1 ;
    for (int i  = 0 ; i < size ; i++)
    {   
        char c = str[i];

        int counter = 1 ;

        while (str[i] == str[++i])
        {
            counter++;
        }
        
        i--;

        cout<< c << " : " << counter << endl;
        
    }
    

}