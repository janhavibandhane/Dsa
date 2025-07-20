// // find largest element in array
// // class Solution {
// // public:
// //     int largestElement(vector<int>& nums) {
// //           int largest=nums[0];
// //           for(int i=0;i<nums.size();i++){
// //             if(nums[i]>largest){
// //                 largest=nums[i];
// //             }
// //           }
// //           return largest;
// //     }
// // };
// //find second largest element in array

// // class Solution {

// public:

//  int FindsecondLargestEle(vector<int>& nums,int n) {

//    int largest=INT_MIN;

//    int secondLargestEle=INT_MIN;

//    for(int i=0;i<n;i++){

//     if(nums[i]>largest){

//       secondLargestEle=largest;

//       largest=nums[i];

//     }else if(nums[i]!=largest && secondLargestEle<nums[i]){

//       secondLargestEle=nums[i];

//     }else{

//       secondLargestEle=-1;

//     }

//    }

//    return (secondLargestEle == INT_MIN) ? -1 : secondLargestEle;

//   }

//   int secondLargestElement(vector<int>& nums) {

//     int n=nums.size()-1;

//     int secondLargestEle=FindsecondLargestEle(nums,n);

//     return secondLargestEle;

//   }

// };



// //find array is sorted or not

// // class Solution{

//  public:

//  bool isSorted(vector<int>& nums){

//   int n=nums.size()-1;

//       for(int i=1;i<n;i++){

//         if(nums[i]>=nums[i-1]){

//         }else{

//           return 0;

//         }

//       }

//       return 1;

//  }

// };



// // Given an integer array nums sorted in non-decreasing order, remove all duplicates in-place so that each unique element appears only once. Return the number of unique elements in the array

// // class Solution {

// public:

//   int removeDuplicates(vector<int>& nums) {

//     int n=nums.size();

//     int i=0;

//     for(int j=1;j<n;j++){

//       if(nums[i]!=nums[j]){

//         nums[i+1]=nums[j];

//         i++;

//       }

//     }

//       return i+1;

//   }

// };



// 🔁 Example:

// Input:



// cpp

// Copy

// Edit

// nums = [0, 0, 3, 3, 5, 6]

// Steps:



// i	j	nums	Action

// 0	1	[0, 0, 3, 3, 5, 6]	nums[0] == nums[1], skip

// 0	2	[0, 0, 3, 3, 5, 6]	nums[2] ≠ nums[0], i=1, set nums[1]=3

// 1	3	[0, 3, 3, 3, 5, 6]	nums[3]==nums[1], skip

// 1	4	[0, 3, 3, 3, 5, 6]	nums[4]≠nums[1], i=2, nums[2]=5

// 2	5	[0, 3, 5, 3, 5, 6]	nums[5]≠nums[2], i=3, nums[3]=6





// //move array 1st elemnt at last index of array

// //space and time complexity is 0(n)

// int temp=arr[o];

// for(int i=1;i<n;i++){

// arr[i-1]=arr[i];

// }

// arr[n-1]=temp;

// code:-

// class Solution {

// public:

//   void rotateArrayByOne(vector<int>& nums) {

//     int temp=nums[0];

//     int n=nums.size();

//     for(int i=1;i<n;i++){

//       nums[i-1]=nums[i];

//     }

//     nums[n-1]=temp;

//   }

// };

// //Time and Space complexity is o(n)





// //move array by D place

// 1.Brute force approach

// //Pseudo code

// arr=[1,2,3,4,5,6,7] 

// n=7 and d=3



// temp[]=[1,2,3]

// for(int i=d;i<n;i++){

// arr[i-d]=arr[i];

// }

// int j=0;

// for(int i=n-d;i<n;i++){

// a[i]=temp[j];

// j++;

// }

// CODE:-

// //rotate array in left 

// class Solution {

// public:

//   void rotateArray(vector<int>& nums, int k) {

//    vector<int> temp(k);

//    int n=nums.size();

//    if(n==0 || k==0) return;

//    k = k % n;

//    int j=0;

//    for(int i=0;i<k;i++){

//     temp[i]=nums[i];

//    }

//    for(int i=k;i<n;i++){

//     nums[i-k]=nums[i];

//    }

//    for(int i=n-k;i<n;i++){

//      nums[i]=temp[j];

//      j++;

//    }

//   }

// };