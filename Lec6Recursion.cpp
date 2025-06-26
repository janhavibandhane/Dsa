// #include <iostream>

// void f(){

//   std::cout<<"1";

//   f();

// }

// void j(){

//   f();

// }



// int main() {

//  j();



//   return 0;

// }

// 1.Recursion means function ke ander function ko call karna

// 1st we call j() then j call f and then f call it self f for infinete loop

// yes it will breack beacuse stack will overflow then only it break

// 3.base case:- condition giving codintin means print only upto 4 

// 4.Recursion tree  like j()- f()-f()-f() {upto 4 times that is treee }



// Recursion in C++ is a programming technique where a function calls itself within its own definition. This allows for solving complex problems by breaking them down into smaller, self-similar subproblems.

// Key components of recursion:

// Base case:

// A condition that stops the recursive calls, preventing infinite loops. Without it, the function would keep calling itself indefinitely, leading to a stack overflow error.

// Recursive step:

// The part of the function that calls itself, typically with modified input that moves closer to the base case.

// How it works:

// When a recursive function is called, the program creates a new stack frame for that call.

// The function executes until it reaches the recursive step, where it calls itself with new parameters.

// The process continues until the base case is met.

// Once the base case is reached, the function starts returning values back up the call stack.

// Each function call completes its execution, using the return value from the call below it, until the initial call completes and returns the final result.

// Types of recursion:

// Direct recursion: A function calls itself directly.

// Indirect recursion: A function calls another function, which in turn calls the original function (or another function that eventually leads back to the original).

// Tail recursion: The recursive call is the last operation performed in the function. Tail recursive functions can be optimized by compilers to use less memory than non-tail recursive functions.

// Tree recursion: The function calls itself multiple times within its definition



// //Print name for n times

// #include <iostream>

// void f(int i,int n){

//  if(i>n){

//    return;

//  }

//  std::cout<<"Janhavi"<<std::endl;

//  f(i+1,n);

// }

// int main() {
//  f(1,3);
//   return 0;
// }

// //recursion will happen like f(1,3) f(2,3) f(3,3) f(4,3) ---- at this time janhavi will not print it go in if codintion and return



// //2 print from 1 to n

// // Online C++ compiler to run C++ program online

// #include <iostream>

// void f(int i,int n){

//  if(i>n){

//    return;

//  }

//  std::cout<<i<<std::endl;

//  f(i+1,n);

// }

// int main() {
//  f(1,3);
//   return 0;

// }



// //3. print reverse 3,2,1

// #include <iostream>

// void f(int n){

//  if(n==0){

//    return;

//  }

//  std::cout<<n<<std::endl;

//  f(n-1);

// }

// int main() {

//  f(3);

//   return 0;

// }

// print 1 to n without using + operator
// #include <bits/stdc++.h>
// using namespace std;

// void Print(int i,int n){
//     if(i<1){
//         return;
//     }
//     Print(i-1,n);
//     cout<<i<<endl;
// }

// int main(){
//     Print(10,10);
//     return 0;
// }

//OUTPUT
// 1 
// 2
// 3
// 4
// 5
// 6
// 7
// 8
// 9
// 10

//print from  n to 1 withou using - operator
#include <bits/stdc++.h>
using namespace std;

void Print(int i,int n){
    if(i>n){
        return;
    }
    Print(i+1,n);
    cout<<i<<endl;
}

int main(){
    Print(1,10);
    return 0;
}

//what happening here first  PRint fun will go chaeck base case then Print(i+1,n) will happen and cout will not executed until base case will true if base case get true then cout wll run and this number store in memory stack so filo will happen
//output
// 10
// 9
// 8
// 7
// 6
// 5
// 4
// 3
// 2
// 1
