// rules
// 1.outer loop for row and inner loop for column

#include <iostream>
using namespace std;
void pattern1(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
// output
// ****
// ****
// ****
// ****

void pattern2(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
// output
//  *
//  **
//  ***
//  ****

void pattern3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout <<j;
        }
        cout << endl;
    }
}
//output
// 1
// 12
// 123
// 1234

void pattern4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout <<i;
        }
        cout << endl;
    }
}
// 1
// 22
// 333
// 4444
void pattern5(int n)
{
    for (int i = 1; i <= n; i++)
    {
        // for (int j = n; j>= i; j--)
        // {
        //     cout <<"*";
        // }
        for(int j=1; j<=n-i+1;j++){
            cout<<"*";
        }
        cout << endl;
    }
}
// ****
// ***
// **
// *
void pattern6(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j<=n-i+1; j++)
        {
            cout <<j;
        }
        cout << endl;
    }
}
// 1234
// 123
// 12
// 1
void pattern7(int n)
{
    for (int i = 1; i <= n; i++)
    {
        // for (int j = n; j>= i; j--)
        // {
        //     cout <<"*";
        // }
        for(int j=1; j<=n-i+1;j++){
            cout<<i;
        }
        cout << endl;
    }
}
// 1111
// 222
// 33
// 4
void pattern8(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if(i%2!=0){
            for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
        }
        
    }
}
// *
// ***
// *****
// *******

void pattern9(int n){
    
    for(int i=0;i<n;i++){
       for(int j=0;j<n-i-1;j++){
            cout<<" ";
       }
       for(int j=0;j<2*i+1;j++){
            cout<<"*";
       }
       for(int j=0;j<n-i-1;j++){
           cout<<" ";
       }
       cout<<endl;
    }
}
//      *     
//     ***
//    *****
//   *******
//  *********
// ***********
// void pattern10(int n){
    
//     for(int i=n;i>=0;i--){
//         for(int j=0;j<n-i;j++){
//            cout<<" ";
//        }
      
//        for(int j=0;j<2*i+1;j++){
//             cout<<"*";
//        }
//         for(int j=0;j<n-i-1;j++){
//             cout<<" ";
//        }
       
//        cout<<endl;
//     }
// }
void pattern10(int n){
    
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
           cout<<" ";
       }
      
       for(int j=0;j< 2*n-(2*i+1);j++){
            cout<<"*";
       }
        for(int j=0;j<i;j++){
            cout<<" ";
       }
       
       cout<<endl;
    }
}
//*************
// ***********
//  *********
//   *******
//    *****
//     ***
//      *
void pattern11(int n){
    for(int i=0;i<n;i++){
       for(int j=0;j<n-i-1;j++){
            cout<<" ";
       }
       for(int j=0;j<2*i+1;j++){
            cout<<"*";
       }
       for(int j=0;j<n-i-1;j++){
           cout<<" ";
       }
       cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
           cout<<" ";
       }
       
       for(int j=0;j< 2*n-(2*i+1);j++){
            cout<<"*";
       }
        for(int j=0;j<i;j++){
            cout<<" ";
       }
       
       cout<<endl;
    }
}
//      *     
//     ***
//    *****
//   *******
//  *********
// ***********
// ***********
//  *********
//   *******
//    *****
//     ***
//      *
void pattern12(int n){
    
    for(int i=0;i<n;i++){
      for(int j=0;j<=i;j++){
        cout<<("*");
      }
      cout<<endl;
     }
     for(int i=n;i>=0;i--){
      for(int j=0;j<=i;j++){
        cout<<("*");
      }
      cout<<endl;
     }
    }

// *
// **
// ***
// ****
// *****
// ******
// *****
// ****
// ***
// **
// *
     

int main()
{
    int n;
    cin >> n;
    pattern12(n);
    return 0;
}
