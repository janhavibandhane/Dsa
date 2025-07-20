//STEPS:-
// 1.pick the privet --> choose any number as privet in array
// 2.partition --> arrange smaller number in left side of privet and large in right
// 3. qs left qs right
// arr=[5,2,6,4,1,3]
// 3--> privet
// then 2,1, 3, 5,4,6
//left--> final [1,2]
// now 2,1 --> 1 is privet [1,2]
//right -->final [4,5,6]
// now 5,4,6 --> 6 is privet [5,4,6]
// now 5,4 --> 4 is privet [4,5]

//PSUEDO CODE
//1st Part
// [5,2,6,4,1,3]
// void qucikSort(arr,str,end){
//   if(str<end){
//     priIdex=partision(Arr,st,end);
//     qucikSort(arr,st,priIdex-1); -->left part
//     qucikSort(arr,priIdex+1,end); -->right part
//   }
// }

//2nd part
// _ 5,2,6,4,1,3 --> 3 is privet, idx is str-1
// int partision(arr,str,end){
//   idx=str-1;  //index will make space for every element 
//   privet=arr[end]; //and private is aour last element of arr
//   for(int j=0;j<=end-1;j++){
//     if(Arr[j]<=privet){
//       idx++; //beacuse its in - postion
//       swap(Arr[j],arr[idx])
//     }
//   }
//   //giving postion to privet
//   idex++
//   swap(Arr[end],arr[idx]);
//   return idx;
// }

//CODE:-
#include <iostream>
#include <vector>
using namespace std;
int partition(vector<int> &arr,int st,int end){
   int index=st-1;
   int privet=arr[end];

   for(int j=st;j<=end-1;j++){
    if(arr[j]<=privet){
        index++;
        swap(arr[j],arr[index]);
    }
   }
  // giving correct position to privet  
   index++;
   swap(arr[index],arr[end]);
   return index;

}
void quickSort(vector<int> &arr,int st,int end){
    if(st<end){
      int pivTdx=partition(arr,st,end);
      quickSort(arr,st,pivTdx-1); //---> for left part
      quickSort(arr,pivTdx+1,end); //--> for right part
    }
}
int main(){
    vector<int> arr={12,31,35,8,32,17};
    quickSort(arr,0,arr.size()-1);

    for(int val:arr){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}

//TIME COMPLEXITY
//AVG/Practical => o(n^log n)
//Wosrt Case => 0(n^2)
// when worst case happend ?
// when your privet is =smallest or largest element in array;