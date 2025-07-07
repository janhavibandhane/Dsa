//MERAGE SORT
// pseudo code
// 1ST PART OF MEARGE SORT
// void meargeSort(arr[],str,end){
// if(str<end){  //base case
//    int mid=str+end/2
//    meargeSort(arr,str,mid) //for left part
//    meargeSort(arr,mid,end) //for Right part
//   mearge(arr,str,end,mid);
// }
// }

// 2ND PART OF MEARGE SORT

//now 2 part me array ko divide karke sort kar liye now combine them both
// we will take one temp arr[]
// in which we comapre 2 array ad combine them 
// [1,3,4,5] [2,6,7]

// pseudo code
// void mearge(arr,str,end,mid){
// vector<int> temp;
// int i=str;
// int j=mid+1;
// while(i<=mid && j<=end){
//    if(arr[i]<arr[j]){
//     temp.push_back(arr[i]);
//     i++
// }else{
//     temp.push_back(arr[j]);
//     j++
// }
// }

// for(indx=0;index<temp.size();index++){
//   a[index+str]=temp[index]
// }
// }



// code:-

#include <iostream>

#include <vector>

using namespace std;

void mearge(vector<int> &arr, int str, int end, int mid) {

  vector<int> temp;

  int i = str; //start index of left array

  int j = mid + 1; //start index of right array

  while (i <= mid && j <= end) {

    if (arr[i] < arr[j]) {

      temp.push_back(arr[i]);

      i++;

    } else {

      temp.push_back(arr[j]);

      j++;

    }

  }

//why we didi that after one half finsihed other still need to push theire element in temp array 

  while (i <= mid) {

    temp.push_back(arr[i]);

    i++;

  }

  while (j <= end) {

    temp.push_back(arr[j]);

    j++;

  }

  for (int idx = 0; idx < temp.size(); idx++) {

    arr[idx + str] = temp[idx];

  }

}

void meargeSort(vector<int> &arr, int str, int end) {

  if (str < end) {

    int mid = (str + end) / 2; // FIXED

    meargeSort(arr, str, mid);

    meargeSort(arr, mid + 1, end);

    mearge(arr, str, end, mid);

  }

}

int main() {

  vector<int> arr = {12, 31, 35, 8, 32, 17};

  meargeSort(arr, 0, arr.size() - 1);

  for (int val : arr) {

    cout << val << " ";

  }

  cout << endl;

  return 0;

}


