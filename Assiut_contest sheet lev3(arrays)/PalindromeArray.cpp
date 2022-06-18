#include<iostream>

using namespace std;

int main()
{
    int elements ;

    cin >> elements;

    long long numbers[elements];

    long long compare[elements];

    int counter = 0 ;

    for (int i = 0; i < elements; i++)
    {
        cin >> numbers[i];
    }
    for (int j = elements-1; j >=0; j--)
    {
        compare[counter] = numbers[j];
        counter++;
    }
    int flag = 0 ;
    for (int i = 0; i < elements; i++)
    {   
        if(compare[i] != numbers[i])
        {
            cout<<"NO";
            break;
        }
        if( compare[i] == numbers[i]  )
        {               
            flag++;
            
            if( flag == elements)
            {
                cout<<"YES";
            }
        }
    }
    
    
    
}