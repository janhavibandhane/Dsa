// Parameterised and Functional Recursion
//1. PAramterize
#include<bits/stdc++.h>
using namespace std;
void Parameterised(int i,int sum){
 if(i<1){
    cout<<sum;
    return;
 }
 Parameterised(i-1,sum+i);
}

//2.Functional
//in which we dont take parametter
int functionalSrm(int n) {
    if (n == 0) {
        return 0; // Base case: sum of 0 is 0
    }
    return n + functionalSrm(n - 1); // Recursive case
}

// factorial
int fact(int n){
   if(n==0){
      return 1;
   }
   return n* fact(n-1);
}


int main(){
// Parameterised(4,0); //10
// cout<<functionalSrm(3); //15 sum of 1st 5 num
cout<<"Factorial"<<fact(3);// 6
return 0;
}