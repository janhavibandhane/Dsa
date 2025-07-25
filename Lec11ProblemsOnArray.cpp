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


//Move Zeros to end

//1. brutforce solution

// arr=[1,2,0,3,0,5,,4]

// step1:- Store all non zero elemnts in one array

// temp=[];

// for(int i=0;i<n;i++){

//  if(arr[i]!=0){

//    temp.push_back(arr[i]);

// }

// }

// step2:- put non zero elemnt in the front of arr

// for(int i=0;i<temp.size();i++){

// arr[i]=temp[i]

// }

// for(int i=numofnonz;i<arr.size();i++;){

// arr[i]=0;

// }

// CODE:-

// class Solution {

// public:

//   void moveZeroes(vector<int>& nums) {

//     int n=nums.size();

//     vector<int> temp;

//     for(int i=0;i<n;i++){

//       if(nums[i]!=0){

//         temp.push_back(nums[i]);

//       }

//     }

//     int x=temp.size();

//     for(int i=0;i<x;i++){

//       nums[i]=temp[i];

//     }

//     for(int i=x;i<n;i++){

//       nums[i]=0;

//     }

//   }

// };



// //2. Best Solution

// //STEP 1

// int j=-1;

// for(int i=0;i<n;i++){

// if(i==0){

// j=i;

// break;

// }

// }

// for(int i=j+1;i<n;i++){

// if(i!=0){

// swap(arr[i],arr[j]);

// j++;

// }

// }

// TIME COMPLEXITY

// o(n) and np extra space



// CODE:-

// class Solution {

// public:

//   void moveZeroes(vector<int>& nums) {

//     int n=nums.size();

//     int j=-1;

//     for(int i=0;i<n;i++){

//       if(nums[i]==0){

//         j=i;

//         break;

//       }

//     }

//     if(j==-1) return;

//     for(int i=j+1;i<n;i++){

//       if(nums[i]!=0){

//         swap(nums[i],nums[j]);

//         j++;

//       }

//     }

//   }

// };

// //LINNEAR SEARCH

// class Solution {

// public:

//   int linearSearch(vector<int>& nums, int target) {

//     int n=nums.size();

//     for(int i=0;i<n;i++){

//       if(nums[i]==target){

//         return i;

//       }

//     }

//      return -1;

//   }

// };



//UNION OF TWO SORTED ARRAY	

//1.	brut force SOLUTION

// PSUDOCODE:-

// set<int> it;

// for(int i=0;i<a1;i++){

//   it.push_back(a1[i]);

// }

// for(int i=0;i<b1;i++){

//   it.push_back(b1[i]);

// }

// vector<int> temp;

// for(auto st:it){

//   temp.push_back(st);

// }

// return temp;



// CODE:-

// class Solution {

// public:

//   vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {

//     int n1 = nums1.size();

//     int n2 = nums2.size();

//     set<int> st;

//     // Insert elements from nums1 into the set

//     for(int i = 0; i < n1; i++) {

//       st.insert(nums1[i]);

//     }

//     // Insert elements from nums2 into the set

//     for(int i = 0; i < n2; i++) {

//       st.insert(nums2[i]);

//     }

//     // Convert the set to a vector

//     vector<int> temp;

//     for(auto it: st) {

//       temp.push_back(it);

//     }

//     return temp;

//   }

// };



//2. optimal approch

//CODE:-

// class Solution {

// public:

//   vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {

//     int n1=nums1.size();

//     int n2=nums2.size();

//     int j=0;

//     int i=0;

//     vector<int> unionArr;

//     while(i<n1 && j<n2){

//       if(nums1[i]<=nums2[j]){

//         if(unionArr.size()==0 || unionArr.back()!=nums1[i]){

//           unionArr.push_back(nums1[i]);

//         }

//         i++;

//       }

//       else{

//         if(unionArr.size()==0 || unionArr.back()!=nums2[j]){

//           unionArr.push_back(nums2[j]);

//         }

//         j++;

//       }

//     }

//     while(j<n2){

//        if(unionArr.size()==0 || unionArr.back()!=nums2[j]){

//           unionArr.push_back(nums2[j]);

//         }

//         j++;

//     }

//     while(i<n1){

//        if(unionArr.size()==0 || unionArr.back()!=nums1[i]){

//           unionArr.push_back(nums1[i]);

//         }

//         i++;

//     }

//     return unionArr;

//   }

// };

//TIME COMPLEXITY

// TC=>(N1+N2)

// SC=>(N1+N2)--- IN WORST CASE

