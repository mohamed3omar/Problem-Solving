// #include<bits/stdc++.h>

// using namespace std;

// int index = 0;
// int *binary( int num )
// {   
//     int bin  ;
//     int bi[100] ;
//     while (num > 0)
//     {
//         bi[index] = num % 2;
//         num /= 2;
//         index++;
//     }
//     return bi;
// }
// bool isPalindrom( int arr[])
// {
//     for (int i = 0, z = index-1 ; i < index , z >= 0; i++ , z--)
//     {
//         if( arr[i] != arr[z])
//         {
//             return false ;
//         }
//     }

//     return true;
    
// }

// int main()  
// {  
//     int num ;

//     cin >> num ;

//     if( num % 2 != 0 )
//     {
//         cout<<"NO";
//         return;
//     }
    

//     int * bin = binary(num);

//     int result = isPalindrom(bin);

//     if( result )
//     {
//         cout<<"YES";
//     }
//     else{
//         cout<<"NO";
//     }
// } 