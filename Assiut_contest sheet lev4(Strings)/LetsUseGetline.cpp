#include<iostream>
#include<string>

using namespace std;

int main()
{   
    //there are to way to solve this porblem
    //easy way 
    string strg;

    getline(cin , strg , '\\');

    cout<<strg<<endl;

    //another way 
    /*
    string strg ;

    getline( cin , strg);

    for (int i = 0; i < strg.size(); i++)
    {
        if( strg[i] == '\\')
        {
            break;
        }

        cout<<strg[i];
    }
    */
}