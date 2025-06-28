// Sorting

// 1.Bubble sorting ... time complexity o(n^2)

// [4,1,5,2,3] loop will run n-1 time means 4 time for sorting array

// In this we will compare1st 4,1 then 4,5 and soo on and swap them

// Pseudo code:-

// for(int i=0;i<n-1;i++){

//  for(int j=0; j<n-i-1;j++){

//    if(a[j]>a[j+1}){

//     swap(a[j],a[j+1]

// }

// }

// }

// Code:-
// #include<bits/stdc++.h>
// using namespace std;

// void BubbleSort(int arr[],int n){
//     bool isSwap=false;  
//   for(int i=0;i<n-1;i++){
//     for(int j=0;j<n-i-1;j++){
//         if(arr[j]>arr[j+1]){
//             swap(arr[j],arr[j+1]);
//             isSwap=true;
//         }
//     }
//   }
//   if(!isSwap){
//     return;
//   }
// }

// int main(){
//     int n=5;
//     int arr[]={4,2,1,3,5};

//     BubbleSort(arr,n);
    
//     // lets run it
//     for(int i=0;i<n;i++){
//         cout<<arr[i];
//     }
// }



// 2.selection sorting ... time complexity o(n^2)

// In this we divide array in order and unorder

// [3,1,2,4]us → [1,3,2,4] s=1 , us=3,2,4 —> [1,2,3,4] s=1,2 , us=3,4 and soo on

// code:-
// #include <iostream>

// using namespace std;

// void selectionSort(int arr[],int n){

//  for(int i=0;i<n-1;i++){

//    int smallestindex=i; //unsorted part starts with array 1st element so we are storing 1st element in this variable

//    for(int j=i+1;j<n;j++){

//      if(arr[j] < arr[smallestindex]){

//       smallestindex=j; //updating value if j is small then smallestindex then we are updating value

//      }

//    }

//    swap(arr[i],arr[smallestindex]);

//  }

// }

// int main() {

//   int n=5;

//   int arr[]={4,1,2,5,3};

//   selectionSort(arr,n);

//   for(int i=0;i<n;i++){

//   cout<<arr[i];

//   }

//   return 0;

// }


// #include<bits/stdc++.h>
// using namespace std;

// void SelectionSort(int arr[],int n){
   
//   for(int i=0;i<n-1;i++){
//      int smallestIndex=i; //---assuming 1st index is smallest 
//     for(int j=i+1;j<n;j++){
//         if(arr[j]<arr[smallestIndex]){
//             smallestIndex=j; // changing value of smallestIndex because we find next smallestIndex
//         }
//     }
//     swap(arr[i],arr[smallestIndex]);
//   }
  
// }

// int main(){
//     int n=5;
//     int arr[]={4,2,1,3,5};

//     SelectionSort(arr,n);
    
//     // lets run it
//     for(int i=0;i<n;i++){
//         cout<<arr[i];
//     }
// }


//3.INSERTION SORTING
// #include<bits/stdc++.h>
// using namespace std;

// void insertionSort(int arr[],int n){
//     for(int i=1;i<n;i++){
//         int curr=arr[i]; //index 1
//         int prev=i-1;  //index 0
        
//         while (prev>=0 && arr[prev]>curr)
//         {
//            arr[prev+1]=arr[prev];
//            prev--;
//         }
//         arr[prev+1]=curr;
        
//     }

// }
// int main(){
//   int n=5;
//   int arr[]={4,1,5,2,3};
//   insertionSort(arr,n);
//   for(int i=0;i<n;i++){
//     cout<<arr[i];
//   }
// }


//solved questions
// Bubble Sort

// //1.Descending order

// #include <iostream>

// using namespace std;

// void bubbleSort(int arr[], int n){

//   for(int i=0;i<n-1;i++){

//     for(int j=0;j<n-i-1;j++){

//       if(arr[j]<arr[j+1]){

//         swap(arr[j],arr[j+1]);

//       }

//     }

//   }

// }

// int main() {

//   int n=5;

//   int arr[]={4,2,1,3,5};

//   bubbleSort(arr,n);

//   for(int i=0;i<n;i++){

//     cout<<arr[i];

//   }

//   return 0;

// }

// //2.Asending or decneding only 1st half

// // Online C++ compiler to run C++ program online

// #include <iostream>

// using namespace std;

// void bubbleSort(int arr[], int n){

//   for(int i=0;i<(n/2)-1;i++){

//     for(int j=0;j<(n/2)-i-1;j++){

//       if(arr[j]>arr[j+1]){

//         swap(arr[j],arr[j+1]);

//       }

//     }

//   }

// }

// int main() {

//   int n=6;

//   int arr[]={4,2,1,3,5,6};

//   bubbleSort(arr,n);

//   for(int i=0;i<n;i++){

//     cout<<arr[i];

//   }

//   return 0;

// }

// //3. Ascending and descending for 2nd half

// // Online C++ compiler to run C++ program online

// #include <iostream>

// using namespace std;

// void bubbleSort(int arr[], int n){

//   int startIndex=n/2;

//   for(int i=0;i<startIndex;i++){

//     for(int j=startIndex;j<n-i-1;j++){

//       if(arr[j]<arr[j+1]){

//         swap(arr[j],arr[j+1]);

//       }

//     }

//   }

// }

// int main() {

//   int n=6;

//   int arr[]={4,2,1,3,6,5};

//   bubbleSort(arr,n);

//   for(int i=0;i<n;i++){

//     cout<<arr[i];

//   }

//   return 0;

// }

// //4. find how many times swap

// #include <iostream>

// using namespace std;

// void bubbleSort(int arr[], int n){

//  int swapno=0;

//   for(int i=0;i<n-1;i++){

//     for(int j=0;j<n-i-1;j++){

//       if(arr[j]>arr[j+1]){

//         swap(arr[j],arr[j+1]);

//         swapno+=1;

//       }

//     }

//   }

//   cout<<"Numbers of swap:-"<<swapno<<endl;

// }

// int main() {

//   int n=6;

//   int arr[]={1,3,2,5,6,7};

//   bubbleSort(arr,n);

//   for(int i=0;i<n;i++){

//     cout<<arr[i];

//   }

//   return 0;

// }

// //sort only even numbers or odd

// // Online C++ compiler to run C++ program online

// #include <iostream>

// using namespace std;

// void bubbleSort(int arr[], int n){

//  int swapno=0;

//   for(int i=0;i<n-1;i++){

//     for(int j=0;j<n-i-1;j++){

//       if(arr[j]%2 ==0){ //if(arr[j]%2 !=0)

//         if(arr[j+1]%2 ==0){ //if(arr[j+1]%2 !=0)

//         if(arr[j]>arr[j+1]){

//         swap(arr[j],arr[j+1]);

//         swapno+=1;

//         }

//       }

//       }

//     }

//   }

//   cout<<"Numbers of swap:-"<<swapno<<endl;

// }

// int main() {

//   int n=4;

//   int arr[]={7,5,4,2};

//   bubbleSort(arr,n);

//   for(int i=0;i<n;i++){

//     cout<<arr[i];

//   }

//   return 0;

// }



// //on pair 

// // Online C++ compiler to run C++ program online

// #include <iostream>

// #include<vector>

// using namespace std;

// void bubblesort(vector<pair<string,int>>& student,int n){

//   for(int i=0;i<n-1;i++){

//     for(int j=0;j<n-i-1;j++){

//       if(student[j].second>student[j+1].second){

//         swap(student[j],student[j+1]);

//       }

//     }

//   }

   

// }



// int main() {

//  vector<pair<string,int>> student={

//    {"janhavi",94},

//    {"janhavi",67},

//    {"janhavi",93}

//  };

//  int n=3;

//  bubblesort(student,n);

//  for(int i=0;i<n;i++)

//  {

//    cout<<student[i].first<<"-"<<student[i].second<<endl;

//  }

//   return 0;

// }
