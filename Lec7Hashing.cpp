// Hashing :-
// Pseudo code:-
// int f(int num,arr[]){

// count=0;

// for(int i=0;i<arr.length;i++){

//   if(arr[i]===num){

// cout=count+1;

// }

// Return cout

// }

// }

// Code:-
// #include <iostream>
// int func(int num, int arr[], int size) {
//   int count = 0;
//   for(int i = 0; i < size; i++) {
//     if(arr[i] == num) {
//       count++;
//     }

//   }

//   return count;

// }

// int main() {

//   int myArr[5] = {1, 2, 3, 2, 5}; // Sample array

//   int result = func(2, myArr, 5); // Pass array and its size

//   std::cout << "Count of 2 is: " << result << std::endl;

//   return 0;

// }

// Same using hashing

// Code:-
// #include <iostream>
// using namespace std;
// int main() {
//   int n;
//   cout<<"how much element you want in array:-";

//   cin>>n;

//   int arr[n];

//   cout<<"now enter elemet";

//   for(int i=0;i<n;i++){

//     cin>>arr[i];

//   }

//   //pre computing

//   int hash[13]={0};

//   for(int i=0;i<n;i++){ //this will run upto array elemtns if you enter 5 then it will run upto 5

//     hash[arr[i]]++; // increment the count of that number in hash array //For each value in the array, this line increments the count at that index in hash[].

//   }

//   // take inout

//   int q;

//   cout<<"how much test case you want:-";

//   cin>>q;

//   cout<<"enter elements:-";

//   while(q--){

//     int number;

//     cin>>number;

//     cout<<hash[number]<<endl;

//     //"How many times did a particular number appear in the array?"

// //It does this by directly accessing the precomputed value in hash[].

//   }

//   return 0;

// }

// Find string repeated

