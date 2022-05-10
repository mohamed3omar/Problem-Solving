#include<iostream>
#include<string>
using namespace std;
 
int main(){
    
    string name1 , dad1 , name2 , dad2 ;
    
    cin>>name1>>dad1>>name2>>dad2;
    
    
    if( dad1 == dad2){
        cout<<"ARE Brothers";
    }
    else
        cout<<"NOT";
 
    return 0 ;
}