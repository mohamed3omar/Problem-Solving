 #include<iostream>
using namespace std;
 
int main(){
    
    char mychar ;
    
    cin>>mychar;
    
    
    if( mychar<=90 &&  mychar>=65)
        
        cout<<(char)(mychar+32);
        
    else if( mychar >=97 && mychar <= 122)
    
        cout<<(char)(mychar - 32);
    
    
    
    return 0 ;
}