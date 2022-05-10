#include<bits/stdc++.h>
using namespace std;
int main(){
    
    string equ;
    
    int indexOper;
    
    char charoper;
    
    string num1 , num2;
    cout<<"please enter the equation";
    cin>>equ;
    
    int num1Int , num2Int;
    
    for( int i = 0 ; i < equ.size(); i++)
    {
        
        if(equ[i] == '+' || equ[i] == '-' || equ[i] == '/' || equ[i] == '*')
        {
            indexOper = i;
            
            charoper = equ[i];
            
            break;
        }
    }
    
    num1 = equ.substr(0 , indexOper );
    
    num2 = equ.substr( indexOper+1);
    
    stringstream ss1;
    
    ss1 << num1 ;
    
    ss1 >> num1Int;
    
    stringstream ss2;
    
    ss2 << num2 ;
    
    ss2 >> num2Int;
    
    
    switch(charoper){
        case '+' : cout<<num1Int+num2Int;break;
        case '-' : cout<<num1Int-num2Int;break;
        case '*' : cout<<num1Int*num2Int;break;
        case '/' : cout<<num1Int/num2Int;break;
    }
    
  
    
    return 0 ;
}