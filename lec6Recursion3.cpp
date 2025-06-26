#include<bits/stdc++.h>
using namespace std;
int MultiRecursion(int n){
    if(n<=1) return n ;
    int firstnum=MultiRecursion(n-1);
    int secLast=MultiRecursion(n-2);
    return firstnum+secLast;
}
int main(){
    cout<<MultiRecursion(4); //3

}